#include<iostream>
using namespace std;

template<typename T>
void my_swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void space() {
    cout << "no content" << endl;
}

int main() {
    int a = 10;
    int b = 20;

    my_swap(a, b);
    cout << "a = " << a << " b = " << b << endl;

    my_swap<int>(a, b);
    cout << "a = " << a << " b = " << b << endl;

    space<char>();
    space<string>();
    space<int32_t>();
    space<long long>();
    // space(); 错误，必须指定类型才能使用模板
    return 0;
}
