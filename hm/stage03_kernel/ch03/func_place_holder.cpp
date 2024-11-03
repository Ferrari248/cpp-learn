#include<iostream>
using namespace std;


void f1(int a, int) {
    cout << "f1 " << a << endl;
}

void f2(int a, int = 20) {
    cout << "f2 " << a << endl;
}


int main() {
    f1(1, 2);
    // f1(1) // err
    f2(1);
    f2(1, 5);
}