
#include <iostream>
using namespace std;

int main(void) {
    int a = 10;
    int &b = a;

    // int &b;  错   1.引用必须初始化
    int c = 20;
    b = c;   // 不报错   但这个是赋值，并不是更改引用
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}
