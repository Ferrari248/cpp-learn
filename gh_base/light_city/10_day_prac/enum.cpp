/* 枚举类型.cpp */
#include <iostream>
using namespace std;

enum weekday { s, m, t, w, thu, f, s1 };

int main(int argc, char const *argv[]) {
  enum weekday wek = s;
  for (int i = wek; i <= s1; i++) {
    cout << i << endl;
    cout << wek + 0 << endl;
    cout << "-------哈哈-------" << endl;
  }
  return 0;
}