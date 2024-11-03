#include<iostream>
#include<string>

using namespace std;

struct student
{
    string name;
    int age;
    int id;
};

void print_student_age(const student * stu) {
    // stu -> age = 35; // const修饰，不能修改
    cout << stu -> age << endl;
}

int main(void) {
    student s = {"张三", 25, 1};
    student * sp = &s;
    print_student_age(sp);
    return 0;
}