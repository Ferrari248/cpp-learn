#include <iostream>
#include "my_arr.cpp"
using namespace std;

void print_int_arr(MyArr<int>& arr) {
    for (int i = 0; i < arr.get_size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test_01() {
    MyArr<int> arr1(5);

    MyArr<int> arr2(arr1);

    MyArr<int> arr3(100);
    arr3 = arr1;
}

void test_02() {
    MyArr<int> arr1(5);
    for (int i = 1; i <= 5; i++) {
        arr1.push_back(i);
    }
    print_int_arr(arr1);
    cout << arr1.get_size() << endl;
    arr1.pop_back();
    print_int_arr(arr1);
    cout << arr1.get_size() << endl;
}

int main() {
    // test_01();
    test_02();
}