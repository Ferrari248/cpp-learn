#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1;
  string s2;
  string s3;
  string s4;
  string s5;
  string s6;
  string s7;
  string s8;

  s1 = "hello world";
  s2 = s1;
  s3 = 'a';
  s4.assign(s1);
  s5.assign("sdf");
  s5.assign("rrr");
  s6.assign("rrr", 20);
  s7.assign('a', 67);  // 'a'被隐式转换为了48
  s8.assign(9, 'b');

  cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl << s5 << endl << s6 << endl << s7 << endl << s8 << endl;
}