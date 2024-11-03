#include<iostream>
using namespace std;

int f1(int a) {
    return a + 1;
}

float f1(double a) {
    return a + 1.5;
}

int f1(int a, int b) {
    return a + b;
}

int f1(int a, int b, string c) {
    cout << c << endl;
    return a + b;
}


int main() {
    cout << f1(1) << endl;
    cout << f1(1.1) << endl;
    cout << f1(1, 2) << endl;
    cout << f1(1, 2, "aa") << endl;
}