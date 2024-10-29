#include <iostream>
using namespace std;

// 值传递。不会发生交换。
void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// 指针传递。会发生交换。
void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int a = 10;
    int b = 20;
    swap1(a, b);
    cout << a << " " << b << endl;
    swap2(&a, &b);
    cout << a << " " << b << endl;
}