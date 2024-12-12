#include "speech_manager.h"

SpeechManager::SpeechManager() {
    this->init_speech();
    this->create_speaker();
    this->load_record();
}

SpeechManager::~SpeechManager()= default;

void SpeechManager:: show_menu() {
    cout << "**********************************************" << endl;
    cout << "********* welcome to speech context **********" << endl;
    cout << "********* 1. begin a new race       **********" << endl;
    cout << "********* 2. show history           **********" << endl;
    cout << "********* 3. clear history          **********" << endl;
    cout << "********* 0. exit                   **********" << endl;
};

void SpeechManager:: exit_system() {
    cout << "please input user rating: " << endl;
    int rating;
    cin >> rating;
    cout << "thanks, get your rating: " << rating << endl;
    cout << "good bye" << endl;
    exit(0);
}

void SpeechManager:: init_speech() {
    this->v1.clear();
    this->v2.clear();
    this->v3.clear();
    this->m_speaker.clear();
    this->m_index = 1;
    this->m_record.clear();
}

void SpeechManager:: clear_history() {
    cout << "Are you sure clear all the records?" << endl;
    cout << "1: yes" << endl;
    cout << "2: no" << endl;
    int select = 0;
    cin >> select;
    if (select == 1) {
        ofstream ofs("speech.csv", ios::trunc);
        ofs.close();
        this->init_speech();
        this->create_speaker();
        this->load_record();
        cout << "clear history finish!" << endl;
    }
}

void SpeechManager:: begin_new_race() {
    cout << "begin_new_race ..." << endl;
    this->start_speech();
}

void SpeechManager:: create_speaker() {
    const string name_seed = "ABCDEFGHIJKL";
    for (int i = 0; i < name_seed.size(); i++) {
        string name = "player";
        name += name_seed[i];
        Speaker sp;
        sp.name = name;
        // for (float & j : sp.score) {
        for (int j = 0; j < 2; j++) {
            sp.score[j] = 0;
        }

        int id = 10000 + i + 1;
        this->v1.push_back(id);
        this->m_speaker.insert(make_pair(id , sp) );
    }
}

void SpeechManager:: start_speech() {
    // 第一轮
    // 1.抽签
    speech_draw();

    // 2.比赛
    speaker_contest();

    // 3.显示晋级结果
    show_score();

    // 第二轮
    this->m_index++;
    // 1.抽签
    speech_draw();

    // 2.比赛
    speaker_contest();

    // 3.显示最终结果
    show_score();

    // 4.保存比赛记录
    save_record();

    // 999.重置
    init_speech();
    create_speaker();
    load_record();

    cout << "本届比赛完毕！" << endl;
}

void SpeechManager:: speech_draw() {
    cout << "第"<< this->m_index <<"轮比赛 抽签中..." << endl;
    // 模拟抽签耗时
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "=========" << endl;
    cout << "抽签结果：" << endl;

    default_random_engine random_engine(random_device{}());
    if (this->m_index == 1) {
        shuffle(v1.begin(), v1.end(), random_engine);
        for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
            cout << *it << " ";
        }
    } else {
        shuffle(v2.begin(), v2.end(), random_engine);
        // for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) { *it .....
        for (int & it : v2) {
            cout << it << " ";
        }
    }
    cout << "=========" << endl;
}

void SpeechManager:: speaker_contest() {
    cout << "第"<< this->m_index <<"轮比赛 正式开赛..." << endl;
    // multimap<double, int, greater<double>> group_score;
    multimap<double, int, greater<>> group_score;
    int num = 0;

    // 模拟比赛耗时
    this_thread::sleep_for(chrono::milliseconds(500));
    vector<int> v_src;
    if (this->m_index == 1) {
        v_src = v1;
    } else {
        v_src = v2;
    }
    deque<double> d;
    for (int & it : v_src) {
        num++;
        for (int i = 0; i < 10; i++) {
            double score = (rand() % 400 + 600) / 10.0f;
            printf("%.1f ", score);
            d.push_back((score));
        }
        cout << endl;
        sort(d.begin(), d.end(), greater<double>());
        d.pop_front();
        d.pop_back();
        double sum = accumulate(d.begin(), d.end(), 0.0f);
        double avg = sum / (double) d.size();
        printf("选手编号：%d 姓名：%s 平均分： %.1f \n", it, this->m_speaker[it].name.c_str(), avg);
        this->m_speaker[it].score[this->m_index - 1] = avg;

        group_score.insert(make_pair(avg, it));
        if (num % 6 == 0) {
            printf("小组%d 名次：\n", num / 6);
            // for (multimap<double, int, greater<double>> ::iterator it = group_score.begin(); it != group_score.end(); it++) {
            for (auto & git : group_score) {
                Speaker speaker = this->m_speaker[git.second];
                printf("选手编号：%d 姓名：%s 成绩：%.1f\n", git.second, speaker.name.c_str(), git.first);
            }
            int count = 0;
            // for (multimap<double, int, greater<double>> ::iterator it = group_score.begin(); it != group_score.end() && count < 3; it++, count++) {
            for (auto git = group_score.begin(); git != group_score.end() && count < 3; git++, count++) {
                if (this->m_index == 1) {
                    v2.push_back(git->second);
                } else {
                    v3.push_back(git->second);
                }
            }
            group_score.clear();
        }
    }
    printf("第%d轮比赛 结束！\n", this->m_index);
}

void SpeechManager:: show_score() {
    printf("第%d轮比赛 晋级结果：\n", this->m_index);
    vector<int> v;
    if (this->m_index == 1) {
        v = v2;
    } else {
        v = v3;
    }
    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    for (int & it : v) {
        Speaker speaker = this->m_speaker[it];
        printf("选手编号：%d 姓名：%s 成绩：%.1f\n", it, speaker.name.c_str(), speaker.score[this->m_index-1]);
    }
}

void SpeechManager:: save_record() {
    ofstream ofs;
    ofs.open("speech.csv", ios::out | ios::app); // append mod
    // for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++) {
    for (int & it : v3) {
        ofs << it << "," << this->m_speaker[it].score[1] << ",";
    }
    ofs << endl;
    ofs.close();
    cout << "record has saved" << endl;

    this->record_is_empty = false;
}

void SpeechManager:: load_record() {
    ifstream ifs("speech.csv", ios::in);
    if (!ifs.is_open()) {
        this->record_is_empty = true;
        cout << "record not exist" << endl;
        ifs.close();
        return;
    }

    // 文件被清空的情况
    char ch;
    ifs >> ch;
    if (ifs.eof()) {
        this->record_is_empty = true;
        cout << "record is empty" << endl;
        ifs.close();
        return;
    }

    this->record_is_empty = false;
    ifs.putback(ch);
    string data;
    int index = 0;
    while (ifs >> data) {
        // cout << data << endl;
        // 10004,87.375,10005,84.5812,10011,82.0875,
        vector<string> v;
        int pos = -1;
        int start = 0;
        while (true) {
            pos = data.find(",", start);
            if (pos == -1) {
                // 没有,号
                break;
            }
            string temp = data.substr(start, pos - start);
            // cout << temp << endl;
            v.push_back(temp);
            start = pos + 1;
        }
        this->m_record.insert(make_pair(index, v));
    }
    ifs.close();
    // for (map<int,vector<string>>::iterator it = this->m_record.begin(); it != this->m_record.end(); it++) {
    //     cout << "第" << it->first + 1 << "届比赛  冠军：" << it->second[0] << " 分数：" << it->second[1] << endl;
    // }
}

void SpeechManager:: show_record() {
    if (this->record_is_empty) {
        cout << "record is empty" << endl;
    }
    for (int i = 0; i < this->m_record.size(); i++) {
        cout << "第" << i + 1 << "届比赛" << endl;
        cout << "冠军：" << this->m_record[i][0] << " 得分：" << this->m_record[i][1] << endl;
        cout << "冠军：" << this->m_record[i][2] << " 得分：" << this->m_record[i][3] << endl;
        cout << "冠军：" << this->m_record[i][4] << " 得分：" << this->m_record[i][5] << endl;
    }
    cout << endl;
}
