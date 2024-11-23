#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

/**
 * https://leetcode.cn/problems/two-sum/description/?envType=study-plan-v2&envId=top-100-liked
 */
class Solution {
public:
    vector<int> twoSumM1(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
    }

    vector<int> twoSumM2(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int j = 0; ; j++) {
            auto it = map.find(target - nums[j]);
            // unordered_map<int,int>::iterator it = map.find(target - nums[j]);
            if (it != map.end()) {
                return {it->second, j};
            }
            map[nums[j]] = j;
        }
    }
};

int main() {
    Solution solution;
    vector<int> v1 = {2, 7, 11, 15};
    vector<int> ans1 = solution.twoSumM1(v1, 9);
    vector<int> ans2 = solution.twoSumM2(v1, 9);
    cout << ans1[0] << " " << ans1[1] << endl;
    cout << ans2[0] << " " << ans2[1] << endl;
}
