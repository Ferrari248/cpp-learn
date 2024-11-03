#include<iostream>
using namespace std;

void f1(int &a) {
    cout << "f1 v1" << endl;
}

void f1(const int &a) { // const int & 和 int & 类型不同
    cout << "f1 v2" << endl;
}


void f2(int a, int b = 2) {
    cout << "f2 v1" << endl;
}

void f2(int a) {
    cout << "f2 v2" << endl;
}



int main() {
    int a = 1;
    f1(a);
    f1(1);
    // f2(1); 错误 因为有歧义
    f2(1, 1);
}