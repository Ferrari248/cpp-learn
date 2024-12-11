#include <iostream>
#include "speech_manager.h"

using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    SpeechManager sm;
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
                sm.show_record();
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