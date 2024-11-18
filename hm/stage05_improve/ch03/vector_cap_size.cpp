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
    cout << v1.capacity() << endl;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    print_vector(v1);

    cout << v1.empty() << endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
    v1.resize(5);
    v1.resize(10, 99);
    print_vector(v1);
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
}