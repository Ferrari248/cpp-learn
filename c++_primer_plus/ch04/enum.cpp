#include <iostream>
using namespace std;

// c风格老式枚举
enum Color {
  RED,
  BLUE,
  GREEN,
};

// c++11强类型枚举
enum class Season {
  SPRING,
  SUMMER,
  AUTUMN,
  WINTER,
};

int main() {
  enum Color c;
  c = BLUE;
  cout << c << endl;
  int c2 = Color::GREEN;
  cout << c2 << endl;
  c2 = Color(RED);
  c2 = Color::RED;
  cout << c2 << endl;

  cout << "=====" << endl;

  enum Season s = Season::SUMMER;
  // int s1 = Season::SUMMER; err
  // cout << s << endl; err

  return 0;
}