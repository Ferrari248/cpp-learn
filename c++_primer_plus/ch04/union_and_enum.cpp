#include <iostream>

using namespace std;

union Id {
  long id_num{};
  string id_string;
};

struct Person {
  Id id;
  string name;
};


int main() {
  Person p; // 会报错。总之很坑，尽量别用union
}