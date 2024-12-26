#include <stack>
#include <queue>
#include <iostream>

using namespace std;

void print_stack(const stack<int>& s) {
  stack<int> s2;
  s2 = stack(s);
  while (!s2.empty()) {
    cout << s2.top() << " ";
    s2.pop();
  }
  cout << endl;
}

void test_stack_01() {
  stack<int> s1;
  for (int i = 0; i < 5; i++) {
    s1.push(i+1);
  }
  print_stack(s1);
  cout << s1.size() << endl;
}

void print_queue(const queue<int>& q) {
  queue<int> q2;
  q2 = queue(q);
  while (!q2.empty()) {
    cout << q2.front() << " ";
    q2.pop();
  }
  cout << endl;
}

void test_queue_01() {
  queue<int> q1;
  for (int i = 0; i < 5; i++) {
    q1.push(i + 1);
  }
  print_queue(q1);
  cout << q1.size() << endl;
}

int main() {
  test_stack_01();
  test_queue_01();
}