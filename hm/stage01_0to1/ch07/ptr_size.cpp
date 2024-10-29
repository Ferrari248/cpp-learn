#include <iostream>
using namespace std;

// 32位下：4字节
// 64位下：8字节
int main(void) {
    cout << "sizeof(void*) = " << sizeof(void*) << endl;
    cout << "sizeof(int*) = " << sizeof(int*) << endl;
    cout << "sizeof(uint*) = " << sizeof(uint*) << endl;
    cout << "sizeof(float*) = " << sizeof(float*) << endl;
    cout << "sizeof(char*) = " << sizeof(char*) << endl;
    cout << "sizeof(long*) = " << sizeof(long *) << endl;
    cout << "sizeof(long long*) = " << sizeof(long long *) << endl;
}
