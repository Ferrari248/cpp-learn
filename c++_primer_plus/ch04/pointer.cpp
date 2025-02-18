
int main(int argc, char *argv[]) {
  /**
  from doubao

  1.指针的定义
  int *intPtr; // 定义一个指向 int 类型的指针
  double *doublePtr; // 定义一个指向 double 类型的指针

  2.指针的初始化
  int *intPtr1 = nullptr;
  int num = 10;
  int *intPtr2 = &num; // intPtr 指向 num 的内存地址

  3.指针的解引用
  int num = 10;
  int *intPtr = &num;
  std::cout << *intPtr << std::endl; // 输出 10，通过解引用访问 num 的值
  *intPtr = 20; // 修改指针所指向内存地址上的值
  std::cout << num << std::endl; // 输出 20，num 的值已被修改

  4.指针运算
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr; // 指针指向数组的第一个元素
  std::cout << *ptr << std::endl; // 输出 1
  ptr++; // 指针向后移动一个 int 类型的位置
  std::cout << *ptr << std::endl; // 输出 2

  5.指针与数组
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr; // 等价于 int *ptr = &arr[0];
  for (int i = 0; i < 5; i++) {
      std::cout << *(ptr + i) << std::endl; // 输出数组元素
  }

  6.指针与函数
    1）指针作为函数参数
      void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
      }

    2）函数返回指针
      int* createArray(int size) {
        int *arr = new int[size]; // 使用 new 动态分配内存
        for (int i = 0; i < size; i++) {
            arr[i] = i;
        }
        return arr;
      }

  7. 动态内存分配与指针
  int *numPtr = new int; // 动态分配一个 int 类型的内存空间
  *numPtr = 10;
  std::cout << *numPtr << std::endl;
  delete numPtr; // 释放动态分配的内存

  int *arrPtr = new int[5]; // 动态分配一个包含 5 个 int 元素的数组
  for (int i = 0; i < 5; i++) {
      arrPtr[i] = i;
  }
  delete[] arrPtr; // 释放动态分配的数组内存
  }

   **/
}
