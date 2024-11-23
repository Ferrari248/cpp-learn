#include <iostream>
using namespace std;

// “函数对象”，又叫“仿函数”
// 3个特点

class MyAdd {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};

void test01() {
    MyAdd my_add;
    cout << "my_add " << my_add(3, 4) << endl;
}

class MyPrint {
public:
    MyPrint() {
        counter = 0;
    }
    int counter;

    int operator()(string info) {
        cout << info << endl;
        counter++;
        return counter;
    }
};

void test02() {
    MyPrint my_print;
    cout << "my_print " << my_print("hello") << endl;
    cout << "my_print " << my_print("hello") << endl;
    cout << "my_print " << my_print("hello") << endl;
}

void do_print(MyPrint& my_print, string info) {
    my_print(info);
}

void test03() {
    MyPrint my_print;
    do_print(my_print, "hi");
}

int main() {
    test01();
    test02();
    test03();
}