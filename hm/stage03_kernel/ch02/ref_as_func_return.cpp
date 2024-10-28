
#include <iostream>
using namespace std;

// 非法操作。  不要返回局部变量的引用，否则导致非预期值
int& t1() {
    int a = 10;
    return a;
}

int& t2() {
    static int a = 10;  // 静态变量在全局区，系统来释放，而不是函数栈调用释放
    return a;
}

int main(void) {
//    int &b = t1();
    int &b = t2();
    cout << b << endl;
    cout << b << endl;

    t2() = 20;
    cout << b << endl;
    cout << b << endl;
}
