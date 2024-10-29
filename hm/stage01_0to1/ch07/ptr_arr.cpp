#include <iostream>
using namespace std;

int main(void) {
    int * arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    // 利用指针来访问数组元素
    cout << arr << endl;
    cout << *arr << endl;
    arr++;  // 每次往后走4字节
    cout << arr << endl;
    cout << *arr << endl;
}