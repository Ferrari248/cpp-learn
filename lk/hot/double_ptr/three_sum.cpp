#include <iostream>
#include <vector>
#include <ranges>
using namespace std;

/**
 * https://leetcode.cn/problems/3sum/description/
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        ranges::sort(nums);
        vector<vector<int>> ans;
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            int x = nums[i];
            if (i && x == nums[i - 1]) continue; // 跳过重复数字
            if (x + nums[i + 1] + nums[i + 2] > 0) break; // 优化一
            if (x + nums[n - 2] + nums[n - 1] < 0) continue; // 优化二
            int j = i + 1, k = n - 1;
            while (j < k) {
                int s = x + nums[j] + nums[k];
                if (s > 0) {
                    k--;
                } else if (s < 0) {
                    j++;
                } else {
                    ans.push_back({x, nums[j], nums[k]});
                    for (j++; j < k && nums[j] == nums[j - 1]; j++); // 跳过重复数字
                    for (k--; k > j && nums[k] == nums[k + 1]; k--); // 跳过重复数字
                }
            }
        }
        return ans;
    }
};

void print_2_dim_vec(vector<vector<int>> v) {
    cout << "[";
    for (int i = 0; i < v.size(); i++) {
        cout << "[";
        for (int j = 0; j < v[i].size(); j++) {
            if (j < v[i].size() - 1) {
                cout << v[i][j] << ", ";
            } else {
                cout << v[i][j];
            }
        }
        cout << "]";
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;
    vector<int> v1{-1,0,1,2,-1,-4};
    print_2_dim_vec(solution.threeSum(v1));
    vector<int> v2{0,1,1};
    print_2_dim_vec(solution.threeSum(v2));
    vector<int> v3{0,0,0};
    print_2_dim_vec(solution.threeSum(v3));
}
