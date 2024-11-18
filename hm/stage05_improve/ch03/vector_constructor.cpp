#include <iostream>
#include <vector>

using namespace std;

void print_vector_v1(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void print_vector_v2(vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void print_vector_v3(vector<int>& v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void print_vector_v4(vector<int>& v) {
    for (int & it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    print_vector_v1(v1);

    vector<int> v2(v1.begin(), v1.end());
    print_vector_v2(v2);

    vector<int> v3(10, 100);
    print_vector_v3(v3);

    vector<int> v4(v3);
    print_vector_v4(v4);
}