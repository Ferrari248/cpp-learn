#include<string>
#include<vector>
#include<iostream>

using namespace std;

void print_vector(vector<int>& v) {
  for (int & it : v) {
    cout << it << " ";
  }
  cout << endl;
}

void test_01() {
  vector<int> v1;
  for (int i = 0; i < 3; ++i) {
    v1.push_back(i+1);
  }
  print_vector(v1);

  vector<int> v2 = vector(v1.begin(), v1.end());
  print_vector(v2);

  vector<int> v3(10, 100);
  print_vector(v3);

  vector<int> v4(v3);
  print_vector(v4);
}

void test_02() {
  vector<int> v1; //无参构造
  for (int i = 0; i < 10; i++)
  {
    v1.push_back(i+1);
  }
  print_vector(v1);

  vector<int> v2;
  v2.assign(v1.begin(), v1.end());
  print_vector(v2);

  vector<int> v3;
  v3.assign(10, 200);
  print_vector(v3);
}

void test_03() {
  vector<int> v1;
  cout << v1.empty() << endl;
  cout << v1.size() << endl;
  cout << v1.max_size() << endl;
  cout << v1.capacity() << endl;
  for (int i = 0; i < 10; i++)
  {
    v1.push_back(i+1);
  }
  print_vector(v1);
  cout << v1.empty() << endl;
  cout << v1.size() << endl;
  cout << v1.max_size() << endl;
  cout << v1.capacity() << endl;

  v1.resize(15);
  print_vector(v1);
  v1.resize(20, 9);
  print_vector(v1);
  v1.resize(3, 9);
  print_vector(v1);
}

void test_04() {
  vector<int> v1;
  for (int i = 0; i < 10; i++)
  {
    v1.push_back(i+1);
  }

  v1.pop_back();
  print_vector(v1);

  v1.insert(v1.begin(), -1);
  v1.insert(v1.end(), 3, -2);
  print_vector(v1);

  v1.erase(v1.begin());
  v1.erase(v1.begin(), v1.end());
//  v1.clear();
  print_vector(v1);
}

int main() {
  test_04();
}
