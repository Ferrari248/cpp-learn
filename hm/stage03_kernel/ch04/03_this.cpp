#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    string name;
    // 方式1
    // Person(string name) : name(name) {    }
    // 方式2
    Person(string name) {
      this -> name = name;
    }

    Person& build_person_v1(Person p) {
        this -> name = p.name + "add";
        // *this 返回对象本身
      return *this;
    }

    Person build_person_v2(Person p) {
        this -> name = p.name + "add";
        // *this 返回对象本身
        return *this;
    }
};

int main() {
    Person p1("John");
    Person p2 = p1.build_person_v1(p1);
    Person p3 = p1.build_person_v2(p1);
    cout << p1.name << endl;
    cout << p2.name << endl;
    cout << p3.name << endl;
    return 0;
}