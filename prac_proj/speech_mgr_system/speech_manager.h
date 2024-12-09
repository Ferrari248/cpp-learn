#pragma once
#include <vector>
#include <map>
#include <algorithm>
#include <chrono>
#include <deque>
#include <random>
#include <thread>
#include <numeric>
#include <fstream>
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

    SpeechManager();

    ~SpeechManager();

    void begin_new_race();

    void clear_history();

    void show_menu();

    void exit_system();


    void init_speech();

    void create_speaker();

    void start_speech();

    void speech_draw();

    void speaker_contest();

    void show_score();

    void save_record();

    void load_record();

    // 判断speech.csv文件是否为空
    bool record_is_empty;

     map<int, vector<string >> m_record;


};
