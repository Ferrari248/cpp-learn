#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    print_vector(v1);

    v1.pop_back();
    v1.insert(v1.end(), v1.begin(), v1.end());
    print_vector(v1);
    v1.insert(v1.begin(), 99);
    print_vector(v1);

    v1.erase(v1.begin());
    print_vector(v1);
    v1.erase(v1.begin(), v1.end());
    print_vector(v1);
    v1.clear();
    print_vector(v1);

    cout << v1.size() << endl;
}
