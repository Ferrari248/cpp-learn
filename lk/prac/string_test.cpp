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

void test_04() {
  string s1 = "abcdefg de";
  int pos = s1.find("de");
  cout << pos << endl;
  int pos2 = s1.rfind("de");
  cout << pos2 << endl;

  string str1 = "abcdefgde";
  str1.replace(1, 3, "11111111");
  cout << "str1 = " << str1 << endl;
}

void test_05() {
  string s1 = "abcdefg de";
  string s2 = "abdcdefg de";
  int comp_ret = s1.compare(s2);
  cout << comp_ret << endl;
  cout << (s1>s2) << endl;
  cout << (s1==s2) << endl;
  cout << (s1<s2) << endl;
}

void test_06() {
  string s1 = "abcdefg de";
  char c = s1[0];
  char c2 = s1.at(1);
  cout << c << endl;
  cout << c2 << endl;
  s1[3] = 'x';
  s1.at(4) = 'y';
  cout << s1 << endl;
}

void test_07() {
  string s1 = "abcdefg de";
  s1.insert(2, "c");
  cout << s1 << endl;
  s1.insert(2, 5, 'p');
  cout << s1 << endl;
  s1.erase(8);
  cout << s1 << endl;
  s1.erase(6, 1);
  cout << s1 << endl;
}

void test_08() {
  string s1 = "abcdefg de";
  s1.substr(3, 5);
  cout << s1 << endl;
  string s2 = s1.substr(3, 9);
  cout << s2 << endl;
}

int main() {
  test_08();
}