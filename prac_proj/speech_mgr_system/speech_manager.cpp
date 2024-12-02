#include "speech_manager.h"

SpeechManager::SpeechManager() {
    this->init_speech();
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
}