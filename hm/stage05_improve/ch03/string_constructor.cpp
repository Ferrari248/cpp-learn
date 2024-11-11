#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;

    const char * c = "Hello World!";
    string s2(c);

    string s3(s2);

    string s4(10, 'a');

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
}