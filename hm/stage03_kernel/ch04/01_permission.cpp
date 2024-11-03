#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;


/**
 * 3种权限：public  protected  private
 */

class Person
{
public:
    int id;
    string name;

protected:
    string car;

private:
    string password;

public:
    void f1() {
        cout << id << " " << name << " " << car << " " << password << " " << endl;
    }
};

int main(void) {
    Person p1;
    p1.f1();
    cout << p1.id << endl;
    // cout << p1.car << endl;  // err
    // cout << p1.password << endl;  // err
    return 0;
}