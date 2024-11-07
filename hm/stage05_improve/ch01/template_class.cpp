#include<iostream>
using namespace std;

template<class N, class A = int>
class Person {
public:
    N name;
    A age;
    Person(N name, A age) {
        this->name = name;
        this->age = age;
    }
    void print() {
        cout << "{" << this->name << " " << this->age << "}" << endl;
    }
};


int main() {
    Person<string, int> p1("John", 10);
    Person<string> p2("Tom", 12); // 因为有默认类型了
    p1.print();
    p2.print();
    return 0;
}
