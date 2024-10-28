
#include <iostream>
using namespace std;

// 1.值传递
void swap_01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// 2.指针，地址传递
void swap_02(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 3.引用传递
void swap_03(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(void) {
    int a = 10;
    int b = 20;

// 1不交换。  2、3都交换
//    swap_01(a, b);
//    swap_02(&a, &b);
    swap_03(a, b);
    cout << a << endl;
    cout << b << endl;
}
