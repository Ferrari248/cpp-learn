#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    static string country;

private:
    static string provice;
};

string Person::country = "China"; 
string Person::provice = "bj"; 


int main() {
    Person p;
    cout << p.country << endl;
    p.country = "USA";
    cout << Person::country << endl;
}