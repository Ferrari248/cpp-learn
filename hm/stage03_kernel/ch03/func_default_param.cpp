#include<iostream>
using namespace std;

int f1(int a = 1, int b = 2);

int f1(int a, int b) {
    return a + b;
}


int main() {
    cout << f1() << endl;
    cout << f1(5) << endl;
    cout << f1(2, 3) << endl;
}