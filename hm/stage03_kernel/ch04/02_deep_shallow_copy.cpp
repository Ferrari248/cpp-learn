#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    int *id;

    Person(){}

    Person(int a, int i){
        age = a;
        id = new int(i);
    }

    // v1. 浅拷贝带来的问题是，堆区的内存重复释放
    // s(99414,0x1e9340f40) malloc: Double free of object 0x13b904080
    // s(99414,0x1e9340f40) malloc: *** set a breakpoint in malloc_error_break to debug
    // Person(Person & p){
    //     age = p.age;
    //     id = p.id;
    // }

    // v2. 深拷贝：需要自己实现
    Person(const Person & p){
        age = p.age;
        id = new int(*p.id);
    }
    
    ~Person(){
        if (id != NULL) {
            delete id;
            id = NULL;
        }
    }
};

void f1() {
    Person p1(18, 100003);
    Person p2(p1);

    cout << "p1.age: " << p1.age << endl;
    cout << "p1.id: " << *p1.id << endl;
    cout << "p2.age: " << p2.age << endl;
    cout << "p2.id: " << *p2.id << endl;
}

int main() {
    f1();
    cout << "finish " << endl;
}