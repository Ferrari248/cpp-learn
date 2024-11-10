#include <iostream>
#include <vector>
using namespace std;

void print_for_v3(int val) {
    cout << val << endl;
}

int main() {
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(2);

    // traverse v1
    vector<int> :: iterator it1 = v1.begin();
    vector<int> :: iterator it2 = v1.end();
    while (it1 != it2) {
        cout << *it1 << endl;
        it1++;
    }
    cout << "==============" << endl;

    // traverse v2
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *it << endl;
    }
    cout << "==============" << endl;

    // traverse v3
    for_each(v1.begin(), v1.end(), [](int i){cout << i << endl;});
    for_each(v1.begin(), v1.end(), print_for_v3);
    return 0;
}
