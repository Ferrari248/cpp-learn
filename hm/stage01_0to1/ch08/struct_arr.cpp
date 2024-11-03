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
    struct student stu_arr[3] = {
        {"foo", 18, 1},
        {"bar", 38, 2},
        {"李四", 23, 3}
    };
    for (int i = 0; i < 3; i++)
    {
        if ("李四" == stu_arr[i].name) {
            stu_arr[i].name = "王五";
        }        
        cout << stu_arr[i].name << endl;
        cout << stu_arr[i].age << endl;
        cout << stu_arr[i].id << endl;
    }
    return 0;
}