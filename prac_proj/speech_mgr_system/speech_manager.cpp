#include "speech_manager.h"

SpeechManager::SpeechManager(){}

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