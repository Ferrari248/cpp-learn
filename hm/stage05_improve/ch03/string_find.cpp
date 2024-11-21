#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "abcdefgde";
    int pos = str1.find("de");
    if (pos == -1) {
        cout << "not found" << endl;
    } else {
        cout << "found " << pos << endl;
    }

    cout << "rfind " << str1.rfind("cde") << endl;
    cout << "rfind " << str1.rfind("cdexx") << endl;

}