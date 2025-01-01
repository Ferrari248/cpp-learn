#include <iostream>
#include <climits>

#define ZERO 0ULL

int main() {
  using namespace std;

  short a1 = SHRT_MAX;
  unsigned short a2 = SHRT_MAX;
  a1++;
  a2++;
  cout << a1 << endl;
  cout << a2 << endl;

  short a3 = ZERO;
  unsigned short a4 = ZERO;
  a3--;
  a4--;
  cout << a3 << endl;
  cout << a4 << endl;

  return 0;
}