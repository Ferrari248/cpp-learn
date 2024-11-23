#include <iostream>
#include <vector>
using namespace std;

// 谓词：返回bool类型的仿函数
// operator接受1个参数：一元谓词
// operator接受2个参数：二元谓词

class GtFive {
public:
    bool operator()(int a) {
        return a > 5;
    }
};

int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(), GtFive());
    if (it == v.end()) {
        cout << "Not found" << endl;
    } else {
        cout << "found: " << *it << endl;
    }

}