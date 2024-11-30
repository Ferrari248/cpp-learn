#include <iostream>
#include "speech_manager.h"

using namespace std;

int main() {
    SpeechManager sm;
    int choice = 0;
    while (true) {
        sm.show_menu();
        cout << "plese input your choice:" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                sm.exit_system();
                break;
            default:
                system("clear");
                break;
        }
    }
    cin.get();
    return 0;
}