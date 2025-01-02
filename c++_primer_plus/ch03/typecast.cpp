#include <iostream>

using namespace std;

int main() {
  int auks, bats, coots;

  auks = 1.82 + 4.33;
  bats = (int) 1.82 + (int) 4.33;
  coots = int(1.82) + int(4.33);
  cout << auks << endl;
  cout << bats << endl;
  cout << coots << endl;

  char ch = 'a';
  cout << ch << endl;
  cout << int(ch) << endl;
  cout << static_cast<int>(ch) << endl;
}
