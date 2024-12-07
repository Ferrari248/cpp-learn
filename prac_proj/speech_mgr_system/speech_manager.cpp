#include "speech_manager.h"

SpeechManager::SpeechManager() {
    this->init_speech();
    this->create_speaker ();
}

SpeechManager::~SpeechManager(){}

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

}

void SpeechManager:: show_history() {
    cout << "history is ..." << endl;
}

void SpeechManager:: clear_history() {
    cout << "clear_history ..." << endl;
}

void SpeechManager:: begin_new_race() {
    cout << "begin_new_race ..." << endl;
    this->start_speech();
}

void SpeechManager:: create_speaker() {
    string name_seed = "ABCDEFGHIJKL";
    for (int i = 0; i < name_seed.size(); i++) {
        string name = "player";
        name += name_seed[i];
        Speaker sp;
        sp.name = name;
        // for (float & j : sp.score) {
        for (int j = 0; j < 2; j++) {
            sp.score[j] = 0;
        }

        int id = i + 10001;
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
    // 1.抽签
    // speech_draw();

    // 2.比赛

    // 3.显示最终结果

    // 4.保存比赛记录
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
        for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
            cout << *it << " ";
        }
    }
    cout << "=========" << endl;
}

void SpeechManager:: speaker_contest() {
    cout << "第"<< this->m_index <<"轮比赛 正式开赛..." << endl;
    multimap<double, int, greater<double>> group_score;
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
    for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); it++) {
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
        printf("选手编号：%d 姓名：%s 平均分： %.1f \n", *it, this->m_speaker[*it].name.c_str(), avg);
        this->m_speaker[*it].score[this->m_index - 1] = avg;

        group_score.insert(make_pair(avg, *it));
        if (num % 6 == 0) {
            printf("小组%d 名次：\n", num / 6);
            for (multimap<double, int, greater<double>> ::iterator it = group_score.begin(); it != group_score.end(); it++) {
                Speaker speaker = this->m_speaker[it->second];
                printf("选手编号：%d 姓名：%s 成绩：%.1f\n", it->second, speaker.name.c_str(), it->first);
            }
            int count = 0;
            for (multimap<double, int, greater<double>> ::iterator it = group_score.begin(); it != group_score.end() && count < 3; it++, count++) {
                if (this->m_index == 1) {
                    v2.push_back(it->second);
                } else {
                    v3.push_back(it->second);
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
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        Speaker speaker = this->m_speaker[*it];
        printf("选手编号：%d 姓名：%s 成绩：%.1f\n", *it, speaker.name.c_str(), speaker.score[this->m_index-1]);
    }

}
