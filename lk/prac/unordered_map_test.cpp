#include <iostream>
#include <unordered_map>
using namespace std;

void test_unordered_map_base() {
    unordered_map<string, int> m1;
    m1.insert(make_pair("one", 1));
    m1["two"] = 2;
    m1.at("one") = 3;
    m1.begin()->second = 4;
    // m1.end()->second = 5;    Process finished with exit code 139 (interrupted by signal 11:SIGSEGV)
    for (auto pair : m1) {
        cout << pair.first << " " << pair.second << endl;
    }
}

int main() {
    test_unordered_map_base();
}