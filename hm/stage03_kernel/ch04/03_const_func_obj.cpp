#include <iostream>
#include <string>
using namespace std;

// 常函数、常对象

class Person {
  public:
    string name;
    mutable string title;

    Person(string name) {
      this -> name = name;
    }

    void show_person() const {
      // this -> name = "John";
      // const函数，不能修改成员字段
      // this指针的本质，是个指针常量。
      // 如果这个函数没有const修饰，是可以 this -> name = "John";这个const修饰后，this指针就相当于 const Person const * this，指针指向的值也不能改了
      this->title = "other";
    }

    void misc_v1() {}

};

int main() {
    Person p1("John");
    cout << p1.name << endl;
    // 常对象
    const Person p2("Jane");
    // p2.name = "John"; 错。常对象不能修改成员变量
    p2.title = "haha";  // 可以，因为mutable修饰
    // p2.misc_v1(); 错。常对象只能调用常函数
    p2.show_person();

    return 0;
}