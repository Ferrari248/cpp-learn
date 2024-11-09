#include<iostream>
using namespace std;

template<class T>
class Parent {
public:
    T t;
};

class Child1: public Parent<int> {
public:
    Child1() : Parent() {
        cout << "constructor Child1" <<endl;
        cout << typeid(int).name() <<endl;
    }
};

template<class T1, class T2>
class Child2: public Parent<T2> {
public:
    T1 ft1;
    T2 ft2;
    Child2() {
        cout << "constructor Child2" <<endl;
        cout << typeid(T1).name() <<endl;
        cout << typeid(T2).name() <<endl;
    }

    // 构造函数声明
    Child2(T1 ft1, T2 ft2);
    // 成员函数声明
    void printChild2();
};

template<class T1, class T2>
Child2<T1, T2> :: Child2(T1 ft1, T2 ft2) {
    this->ft1 = ft1;
    this->ft2 = ft2;
}

template<class T1, class T2>
void Child2<T1, T2> :: printChild2() {
    cout << this->ft1 << endl;
    cout << this->ft2 << endl;
}


int main() {
    Child1 c1;
    Child2<char, long long> c2;
    Child2<string, int> c3;
    c2.printChild2();
    c3.printChild2();
    return 0;
}

