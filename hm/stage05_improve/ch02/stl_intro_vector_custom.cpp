#include <iostream>
#include <vector>
using namespace std;

class Person {
    int age;
    string name;
public:
    Person(int age, string name) : age(age), name(name) {}
    string show() {
        return "name: " + name + " age: " + to_string(age);
    }
};

int main() {
    vector<Person> v1;
    v1.push_back(Person(1, "John"));
    v1.push_back(Person(2, "Tom"));
    v1.push_back(Person(3, "Alice"));

    for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << (*it).show() << endl;
    }
    cout << "==============" << endl;

    vector<Person*> v2;
    v2.push_back(new Person(1, "John"));
    v2.push_back(new Person(2, "Tom"));
    v2.push_back(new Person(3, "Alice"));
    for (vector<Person*>::iterator it = v2.begin(); it != v2.end(); it++) {
        cout << (*it)->show() << endl;
    }
    return 0;
}
