#include <iostream>
#include <vector>

using namespace std;


void print_vector(vector<int>& v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}


int main() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }

    vector<int> v2;
    v2 = v1;

    vector<int> v3;
    v3.assign(v1.begin(), v1.end());

    vector<int> v4;
    v4.assign(10,100);

    v2[4] = 88;
    v3[4] = 888;

    print_vector(v1);
    print_vector(v2);
    print_vector(v3);
    print_vector(v4);
}