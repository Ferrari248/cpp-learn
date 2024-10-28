
#include <iostream>
using namespace std;

int main(void) {
    int a = 10;
    int &b = a;
    cout << a << endl;
    cout << b<< endl;

    b = 20;
    cout << a << endl;
    cout << b << endl;
}
