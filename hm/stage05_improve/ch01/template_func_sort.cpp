#include<iostream>
using namespace std;

template<class T>
void sort(T arr[], int32_t len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template<class T>
void printArr(T arr[], int32_t len) {
    for (int i = 0; i < len - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[len - 1] << endl;
}

int main() {
    int arr1[] = {6, 7, 1, 3, 10, 4, 5, 2, 9, 7, 8};
    int32_t len1 = sizeof(arr1) / sizeof(arr1[0]);
    printArr(arr1, len1);
    sort(arr1, len1);
    sort<int>(arr1, len1);
    // sort<>(arr1, len1); 也可以
    // sort(arr1, len1); 也可以
    printArr(arr1, len1);
    cout << "--------" << endl;
    char arr2[] = {'h', 'a', 'y', 'e', 'i', 'o', 's', 'h', 'u'};
    int32_t len2 = sizeof(arr2) / sizeof(arr2[0]);
    printArr(arr2, len2);
    sort<char>(arr2, len2);
    // sort<>(arr2, len2); 也可以
    // sort(arr2, len2); 也可以
    printArr(arr2, len2);
    return 0;
}
