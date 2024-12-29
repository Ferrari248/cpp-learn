#include <climits>
#include <iostream>

using namespace std;

int main() {
  short a1 = SHRT_MAX;
  short a2 = SHRT_MIN;
  cout << a1 << endl;
  cout << a2 << endl;

  int a3 = INT_MAX;
  cout << a3 << endl;
  int a4 = INT_MIN;
  cout << a4 << endl;


  cout << LONG_MAX << endl;
  cout << LONG_LONG_MAX << endl;
  cout << ULONG_LONG_MAX << endl;
  cout << CHAR_BIT << endl;
  cout << CHAR_MAX << endl;
  cout << CHAR_MIN << endl;
  cout << CHAR_WIDTH << endl;
  cout << SCHAR_WIDTH << endl;
  cout << endl;

  cout << sizeof(short) << endl;
  cout << sizeof (int) << endl;
  cout << sizeof (bool) << endl;
  cout << sizeof (long) << endl;
  cout << sizeof (long long) << endl;
  cout << sizeof (unsigned long long) << endl;
  cout << sizeof (size_t) << endl;
}