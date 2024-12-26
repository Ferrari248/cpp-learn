#include<deque>
#include<iostream>
#include<algorithm>

using namespace std;

void print_deque(const deque<int>& v) {
  for (const int & it : v) {
    cout << it << " ";
  }
  cout << endl;
}

void test_01() {
  deque<int> d1;
  for (int i = 0; i < 5; i++) {
    d1.push_back(i+1);
  }

  deque<int> d2;
  d2 = deque(d1);
  d2.at(3) = -99;

  print_deque(d1);
  print_deque(d2);

  deque<int> d3;
  d3.assign(10, 100);
  print_deque(d3);
  d3.assign(d2.begin(), d2.end());
  print_deque(d3);
  cout << d3.size() << endl; // 没有 capacity
  cout << d3.empty() << endl;

  d3.resize(8, 10);
  print_deque(d3);
}

void test_02() {
  deque<int> d1;
  for (int i = 0; i < 5; i++) {
    d1.push_back(i+1);
  }
  d1.pop_back();
  d1.pop_front();
  d1.push_front(-1);
  print_deque(d1);
}

void test_03() {
  deque<int> d1;
  for (int i = 0; i < 5; i++) {
    d1.push_back(i+1);
  }
  d1.insert(d1.begin(), -1);
  d1.insert(d1.begin(), 2, -2);
  print_deque(d1);

  d1.pop_front();
  d1.pop_front();
  d1.pop_front();

  d1.insert(d1.begin(), d1.begin(), d1.end());
  print_deque(d1);
  d1.erase(d1.begin(), d1.end()); // d1.clear();
  print_deque(d1);

  d1.push_front(-2);
  cout << d1.front() << endl;
  cout << d1.back() << endl;
}

void test_04() {
  deque<int> d1;
  for (int i = 10; i > 0; i--) {
    d1.push_back(i);
  }
  print_deque(d1);
  sort(d1.begin(), d1.end());
  print_deque(d1);
}

int main() {
  test_04();
}