#include <iostream>
using namespace std;

int main(void) {
    int a = 10;
    int *p1 = &a;
    cout << p1 << endl;
    cout << *p1 << endl;  // 解引用

    int *p2;
    p2 = &a;
    *p2 = 20;             // 解引用
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << a << endl;
}