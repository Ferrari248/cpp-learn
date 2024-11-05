#include <iostream>
#include <string>
using namespace std;

class Animal {
private: // 子类不能访问
    double money;
protected:
    string name;
public:
    long id;

    Animal() {    }
};

// 1.公共继承  // 父类中的public和protected访问级别都不变
class Cat : public Animal {

};

// 2.保护继承  // 父类中的public和protected访问级别都变为protected
class Dog : protected Animal {

};

// 3.私有继承  // 父类中的public和protected访问级别都变为private
class Bird : private Animal {

};


int main() {
    return 0;
}