#include <iostream>
using namespace std;

class Person
{
public:
    int age;

    Person(){
        cout << "invoke constructor1" << endl;
    }

    Person(int a){
        age = a;
        cout << "invoke constructor2" << endl;
    }

    Person(Person &p){  // 不写这个，也会自动带拷贝构造函数(浅拷贝)
        age = p.age;
        cout << "invoke constructor3" << endl;
    }

    
    ~Person(){
        cout << "invoke destructor" << endl;
    }
};

void f1() {
    Person p1;
    cout << "debug 1" << endl;
    Person p2(10);
    cout << "debug 2" << endl;
    Person p3(p2);
    cout << "debug 3" << endl;

    cout << "p1.age: " << p1.age << endl;
    cout << "p2.age: " << p2.age << endl;
    cout << "p3.age: " << p3.age << endl;
}

int main() {
    f1();
}