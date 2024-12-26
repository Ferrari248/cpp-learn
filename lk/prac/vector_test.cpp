#include<vector>
#include<algorithm>
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

  // sort
  v1.push_back(3);
  v1.push_back(1);
  v1.push_back(2);
  print_vector(v1);
  sort(v1.begin(), v1.end());
  print_vector(v1);
}

void test_05() {
  vector<int> v1;
  for (int i = 0; i < 10; i++) {
    v1.push_back(i+1);
  }
  for (int i = 0; i < v1.size(); i++) {
    cout << v1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < v1.size(); i++) {
    cout << v1.at(i) << " ";
  }
  cout << endl;
  cout << v1.front() << endl;
  cout << v1.back() << endl;
}

void test_06() {
  vector<int> v1;
  for (int i = 0; i < 5; i++) {
    v1.push_back(i+1);
  }
  vector<int> v2;
  for (int i = 0; i < 10; i++) {
    v2.push_back(-i-1);
  }
  v2.swap(v1);
  print_vector(v1);
  print_vector(v2);

  cout << v1.capacity() << endl;
  cout << v2.capacity() << endl;
  vector<int>(v1).swap(v1); //匿名对象
  vector<int>(v2).swap(v2); //匿名对象
  cout << v1.capacity() << endl;
  cout << v2.capacity() << endl;

  v1.reserve(1000); // 预留内存
  cout << v1.capacity() << endl;
}

int main() {
  test_04();
}
