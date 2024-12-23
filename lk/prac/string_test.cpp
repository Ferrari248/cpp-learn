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

int main() {
  test_01();
}