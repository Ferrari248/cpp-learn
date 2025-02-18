#include <iostream>
using namespace std;

enum Color {
  RED,
  BLUE,
  GREEN,
};

int main() {
  enum Color c;
  c = BLUE;
  cout << c << endl;
  int c2 = GREEN;
  cout << c2 << endl;
  c2 = Color(RED);
  c2 = Color::RED;
  cout << c2 << endl;

  return 0;
}