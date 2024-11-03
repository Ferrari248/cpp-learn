#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    string name;
    int *id;

    Person(){}

    Person(int a, string n, int * i): age(a), name(n), id(i) {}

};

int main() {
    int * pid = new(int);
    *pid = 1000005;
    Person p1(25, "zhangsan", pid);
    cout << p1.age << p1.name << *p1.id << endl;
}