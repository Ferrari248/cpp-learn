#include<iostream>
using namespace std;

class Person {
public:
    int age;
    Person() {}
    Person(int age) {
        this->age = age;
    }
};

template<typename T>
bool my_equal(T &a, T &b) {
    if (a == b) {
        return true;
    }
    return false;
}

template<>bool my_equal(Person &a, Person &b) {
    cout << "invoke my_equal" << endl;
    if (a.age == b.age) {
        return true;
    }
    return false;
}

int main() {
    Person a(25);
    Person b(24);
    cout << my_equal(a, b) << endl;
}
