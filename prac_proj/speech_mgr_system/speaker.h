# pragma once
# include <iostream>

using namespace std;

class Speaker {
public:
    long  id;
    string name;
    float score[2];

    Speaker();

    ~Speaker();
};
