#include <iostream>
using namespace std;

int main(void) {
    int a = 10;
    int b = 20;

    // 1. const修饰指针  - 常量指针
    const int *p1 = &a;
    p1 = &b;     // 指针的指向可以修改
//    *p1 = 20;  // 但指针指向的值不可以修改

    // 2. const修饰常量  - 指针常量  (stg03 ch02 引用的本质)
    int * const p2 = &a;
//    p2 = &b;   // 指针的指向不可以修改
    *p2 = b;    // 指针的指向的值可以修改

    // 3. const既修饰指针，又修饰常量。那就都不能改了
    const int * const p3 = &a;
}