#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

/**
 * https://leetcode.cn/problems/longest-consecutive-sequence/submissions/582725454/?envType=study-plan-v2&envId=top-100-liked
 */
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (const auto& num : nums) {
            s.insert(num);
        }
        int ans = 0;
        for (int e : s) {
            if (s.find(e-1) != s.end()) {
                continue;
            }
            int j = e;
            while (s.find(j) != s.end()) {
                j++;
            }
            ans = max(ans, j-e);
        }
        return ans;
    }
};


int main() {
    Solution solution;
    vector<int> v1 = {1,2,3,4,5};
    cout << solution.longestConsecutive( v1) << endl;
    vector<int> v2 = {100,4,200,1,3,2};
    cout << solution.longestConsecutive( v2) << endl;
    vector<int> v3 = {0,3,7,2,5,8,4,6,0,1};
    cout << solution.longestConsecutive( v3) << endl;
}
