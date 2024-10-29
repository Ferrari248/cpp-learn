#include <iostream>
using namespace std;

// 冒泡排序
void bubble(int* arr, int len) {
    for (int i = 0; i < len; i++) {
      for (int j = 0; j < len - i - 1; j++) {
          if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
          }
      }
    }
}

int main(void) {
    int arr[10] = {4,6,8,10,5,7,9,2,1,3};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, len);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
}