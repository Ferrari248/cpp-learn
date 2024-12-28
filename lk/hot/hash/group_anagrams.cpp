#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;

/**
 * 49
 * https://leetcode.cn/problems/group-anagrams/description/?envType=study-plan-v2&envId=top-100-liked
 */
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> m;
    for (auto &s: strs) {
      string sorted_s = s;
      std::sort(sorted_s.begin(), sorted_s.end());
      m[sorted_s].push_back(s); // sorted_s 相同的字符串分到同一组
    }
    vector<vector<string>> ans;
    ans.reserve(m.size()); // 预分配空间
    for (auto &[_, value]: m) {
      ans.push_back(value);
    }
    return ans;
  }
};

int main() {
  vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
  Solution solution;
  vector<vector<string>> ans = solution.groupAnagrams(strs);
  for (auto &v: ans) {
    for (auto &s: v) {
      cout << s << " ";
    }
    cout << endl;
  }
}