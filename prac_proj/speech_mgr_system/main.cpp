#include <iostream>
#include "speech_manager.h"

using namespace std;

int main() {
    SpeechManager sm;
    // for (map<int,Speaker>::iterator it = sm.m_speaker.begin(); it != sm.m_speaker.end(); it++) {
    //     cout << it->first << it->second.name << it->second.score[0] <<  endl;
    // }

    int choice = 0;
    while (true) {
        sm.show_menu();
        cout << "please input your choice:" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                sm.begin_new_race();
                break;
            case 2:
                sm.show_history();
                break;
            case 3:
                sm.clear_history();
                break;
            case 0:
                sm.exit_system();
                break;
            default:
                system("clear");
                break;
        }
    }
}