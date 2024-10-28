#include <iostream>
using namespace std;

int main(void) {
    int * a = new int(456);
    cout << *a << endl;
    cout << *a << endl;
    cout << *a << endl;

    delete a;
    cout << *a << endl;
    cout << *a << endl;

    int * b = new int[10];
    for (int i = 0; i < 10; i++) {
        b[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        cout << b[i] << endl;
    }

    delete [] b;
    cout << b[3] << endl;
    cout << b[4] << endl;
}