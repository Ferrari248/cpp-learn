#include<string>
#include<iostream>

using namespace std;

void test_01() {
  string s1;
  string s2 = "hala";
  s2.append("abc");
  cout << s1 << endl;
  cout << s2 << endl;
  string s3("s是asdf");
  cout << s3[0] << endl;
  cout << s3[1] << endl;
  cout << s3[2] << endl;
  cout << s3[-1] << endl;
}

void test_02() {
  const char* c = "sdf";
  string s1 = string(c);
  cout << s1 << endl;
  string s2 = string(s1);
  string s3 = string(3, 'c');
  cout << s3 << endl;
  string s4;
  s4 = 'p';
  cout << s4 << endl;
}

void test_03() {
  const char* c = "abcdefg";
  string s1;
  s1.assign(c);
  cout << s1 << endl;
  s1.assign(c, 5);
  cout << s1 << endl;
}

int main() {
  test_03();
}