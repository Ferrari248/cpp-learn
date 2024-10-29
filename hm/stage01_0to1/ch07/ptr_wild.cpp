#include <iostream>
using namespace std;

int main(void) {
    int * w = (int *) 0x111;  // 编译不出错，但运行时会崩溃
}