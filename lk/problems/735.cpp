#include <vector>
using namespace std;

class Solution {
public:
  vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> ans;
    for (int asteroid : asteroids) {
      bool alive = true;
      while (alive && !ans.empty() && ans.back() > 0 && asteroid < 0) {
        int last = ans.back();
        if (last <= -asteroid) {
          ans.pop_back();
        }
        if (last >= -asteroid) {
          alive = false;
        }
      }
      if (alive) {
        ans.push_back(asteroid);
      }
    }
    return ans;
  }
};

void test_case(Solution solution, vector<int> v) {
  vector<int> ans = solution.asteroidCollision(v);
  printf("[");
  for (const int e : ans) {
    printf("%d ", e);
  }
  printf("]\n");
}

int main() {
  Solution solution;
  test_case(solution, vector<int>({1, 2, 3}));
  test_case(solution, vector<int>({8, -8}));
  test_case(solution, vector<int>({10, 2, -5}));
  test_case(solution, vector<int>({-2,-2,1,-2}));
  test_case(solution, vector<int>({1,-2,-2,-2}));
  return 0;
}
