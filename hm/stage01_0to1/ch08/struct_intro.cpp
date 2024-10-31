#include <iostream>
#include <string>
using namespace std;

// struct的定义
struct student {
  int id;
  int age;
  string name;
} stu3; // 创建方式3

// 创建struct的3种方法
int main(void) {
    // 创建方式1
    struct student stu1;
    student stu11;
    stu1.id = 1;
    cout << stu1.id << " " << stu1.name << " " << endl;

    // 创建方式2
    struct student stu2 = {1, 25, "John"};

    stu3.name = "Bob";
}