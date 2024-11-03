#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;


// c++中，struct和class唯一的区别：默认的访问权限不同  class里默认是private

class Circle
{
public:
    int r;
    string color;

    void set_r(int radius) {
        r = radius;
    }

    double calc_perimeter() {
        return 2 * PI * r;
    }
};

int main(void) {
    Circle c1;
    c1.r = 10;
    cout << c1.calc_perimeter() << endl;
    c1.set_r(20);
    cout << c1.calc_perimeter() << endl;
    return 0;
}