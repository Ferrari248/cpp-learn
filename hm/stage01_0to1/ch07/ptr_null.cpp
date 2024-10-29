#include <iostream>
using namespace std;

int main(void) {
    int * p1 = nullptr;
    int * p2 = NULL;

    cout << p1 << endl;
    cout << p2 << endl;
    cout << (p1 == p2) << endl;
//    cout << *p1 << endl;    // zsh: segmentation fault  ./out/ptr_null

    bool *a;
//    *a = true;       // zsh: segmentation fault  ./out/ptr_null
}