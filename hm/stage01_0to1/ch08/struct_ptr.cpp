#include<iostream>
#include<string>

using namespace std;

struct student
{
    string name;
    int age;
    int id;
};


int main(void) {
    student s = {"张三", 25, 1};
    student * sp = &s;
    cout << sp->name << endl;
    cout << sp->age << endl;
    cout << sp -> id << endl;
    return 0;
}