#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    s1 += "hello";
    cout << s1 << endl;

    string s2;
    s2 += s1;
    cout << s2 << endl;
    s2.append("...");
    cout << s2 << endl;
    s2.append(",,,,,,,,,,,,", 5);
    cout << s2 << endl;

    string s3 = "s3";
    s3.append(s2, 3, 2);
    cout << s3 << endl;

}