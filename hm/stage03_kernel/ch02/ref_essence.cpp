#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int &ref = a;  // 本质： int* const ref = &a;  指针常量

    ref = 5;
    cout << a << endl;
    cout << ref << endl;
}