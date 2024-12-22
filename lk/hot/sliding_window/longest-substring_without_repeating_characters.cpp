#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

/**
 * 3
 * https://leetcode.cn/problems/longest-substring-without-repeating-characters/description/?envType=study-plan-v2&envId=top-100-liked
 */
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    // 哈希集合，记录每个字符是否出现过
    unordered_set<char> occ;
    int n = s.size();
    // 右指针，初始值为 -1，相当于我们在字符串的左边界的左侧，还没有开始移动
    int rt = -1;
    int ans = 0;
    for (int lt = 0; lt < n; ++lt) {
      if (lt != 0) {
        // 左指针向右移动一格，移除一个字符
        occ.erase(s[lt - 1]);
      }
      while (rt + 1 < n && !occ.count(s[rt + 1])) {
        // 不断地移动右指针
        occ.insert(s[rt + 1]);
        ++rt;
      }
      // 第 i 到 rk 个字符是一个极长的无重复字符子串
      ans = max(ans, rt - lt + 1);
    }
    return ans;
  }
};

int main() {
  Solution solution;
  printf("%d\n", solution.lengthOfLongestSubstring("abcabcbb"));
}