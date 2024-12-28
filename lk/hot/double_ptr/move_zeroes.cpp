#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

/**
* 283
* https://leetcode.cn/problems/move-zeroes/?envType=study-plan-v2&envId=top-100-liked
*/
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int i = 0, j = 0;
    while (i < nums.size()) {
      if (nums[i] != 0) {
        nums[j++] = nums[i];
      }
      i++;
    }
    while (j < nums.size()) {
      nums[j++] = 0;
    }
  }
};

void print_vector(vector<int> nums) {
  for (const auto &element: nums) {
    std::cout << element << " ";
  }
  std::cout << std::endl;
}

int main() {
  Solution solution;
  vector<int> v1 = {1, 0, 3, 0, 0, 6, 7, 0, 9, 10};
  vector<int> v2 = {1, 0, 3, 12};
  vector<int> v3 = {0};

  solution.moveZeroes(v1);
  solution.moveZeroes(v2);
  solution.moveZeroes(v3);

  print_vector(v1);
  print_vector(v2);
  print_vector(v3);
}
