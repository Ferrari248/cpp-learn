#include <thread>
#include <chrono>
#include <algorithm>
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

    // 3.显示晋级结果

    // 第二轮

    // 1.抽签

    // 2.比赛

    // 3.显示最终结果

    // 4.保存比赛记录
}

void SpeechManager:: speech_draw() {
    cout << "第"<< this->m_index <<"轮比赛开始，抽签中..." << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "=========" << endl;
    cout << "抽签结果：" << endl;

    if (this->m_index == 1) {
        random_shuffle(v1.begin(), v1.end());
        for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
            cout << *it << endl;
        }
    } else {
        random_shuffle(v2.begin(), v2.end());
        for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
            cout << *it << endl;
        }
    }

    cout << "=========" << endl;
    cin.get();
}