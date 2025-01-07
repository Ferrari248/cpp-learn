#include <iostream>
using namespace std;

int main() {
  int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int arr2[3];
  // arr2[0] = 1;
  // arr2[1] = 2;
  cout << sizeof(arr1) << endl;
  cout << sizeof(arr1) / sizeof(arr1[0]) << endl;
  // cout << sizeof(arr2) << endl;
  // cout << sizeof(arr2) / sizeof(arr2[0]) << endl;
  cout << arr2[0] << endl;
  cout << arr2[1] << endl;
  cout << arr2[2] << endl;
  return 0;
}