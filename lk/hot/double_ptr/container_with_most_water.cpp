#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

/**
 * 11
 * https://leetcode.cn/problems/container-with-most-water/?envType=study-plan-v2&envId=top-100-liked
 */
class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int left = 0, right = len - 1;
        int ans = 0;
        while (left < right) {
            int water_vol = min(height[left], height[right]) * (right - left);
            ans = max(ans, water_vol);
            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> v1{1,8,6,2,5,4,8,3,7};
    cout << solution.maxArea(v1) << endl;
    vector<int> v2{1,1};
    cout << solution.maxArea(v2) << endl;
}
