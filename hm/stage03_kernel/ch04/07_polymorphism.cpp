#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    //void speak() {   // 加不加virtual，结果不相同！！
     virtual void speak() {
        cout << "animal speaking" << endl;
    }
};


class Cat : public Animal {
public:
    void speak() {
        cout << "cat miao" << endl;
    }
};

void doSomething(Animal & a) {
    a.speak();
}

int main() {
    Cat c;
    doSomething(c);
    return 0;
}