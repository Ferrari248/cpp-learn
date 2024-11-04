#include <iostream>
#include <string>
using namespace std;

class Building {
    friend void vip(Building* building);

private:
    string bed_room;

public:
    string sitting_room;

    Building() {
        this -> sitting_room = "客厅";
        this -> bed_room = "卧室";
    }
};

void vip(Building* building) {
    cout << "visiting bed room!" << endl;
    cout << building->bed_room << endl;
};

// 总的来说，全局函数、类、成员函数，都可以作友元
int main() {
    Building building;
    vip(&building);
    return 0;
}