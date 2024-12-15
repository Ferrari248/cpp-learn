/* 注释.cpp */
#include <iostream>

#define a 10

int main() {
//条件编译指令
#if (a > 5)
  printf("a的值大于5，会输出这条信息。\n");
#endif

#if 1
  std::cout << "进了 if 1" << std::endl;
#endif

#if (a-9)
  printf("a-9\n");
#endif

#if (a-10)
  printf("a-10\n");
#endif

#define b "abc"
  printf("str is %b EnEn\n", b);

  return 0;
}
