#pragma once
#include <vector>
#include <map>
#include "speaker.h"

using namespace std;

class SpeechManager {
public:
    // 第1轮选手列表
    vector<int> v1;

    // 第2轮选手列表
    vector<int> v2;

    // 领奖台选手列表
    vector<int> v3;

    // 全量选手
    map<int, Speaker> m_speaker;

    // 当前是第几场比赛
    int m_index;

    // 初始化
    void init_speech();

    SpeechManager();

    ~SpeechManager();

    void show_menu();

    void exit_system();
};
