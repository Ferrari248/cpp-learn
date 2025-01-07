#include <iostream>

using namespace std;

int main() {
  char s1[] = {'a', 'b', 'c', ' ', 'd'}; // not a string
  char s2[] = {'a', 'b', 'c', ' ', 'd', '\0'}; //  is a string
  cout << s1 << endl;
  cout << s2 << endl;
  printf("%s\n", s1);
  printf("%s\n", s2);
  return 0;
}