#include <iostream>
using namespace std;

// 用途：修饰形参，防止误操作
void show_value(const int& v) {
  // v = 80  错误 variable 'v' declared const here
  cout << v << endl;
}

// 常量引用
int main() {
    const int &ref = 10;  // 相当于：   int tmp = 10;  const int &ref = temp;
    // ref = 10;  错误  不可修改了（因为加了const）

    int a = 30;
    show_value(a);
}
