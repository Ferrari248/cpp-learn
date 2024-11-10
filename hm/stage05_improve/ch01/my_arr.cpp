#pragma once
#include <iostream>
using namespace std;

template <class T>
class MyArr
{
    int capacity;
    int size;
    T * p_addr;

public:
    MyArr(int capacity) {
        cout << "MyArr constructor  invoke" << endl;
        this->capacity = capacity;
        this->size = 0;
        this->p_addr = new T[this->capacity];
    }

    ~MyArr() {
        cout << "MyArr destructor  invoke" << endl;
        if (this->p_addr != NULL) {
            delete[] this->p_addr;
            this->p_addr = NULL;
        }
    }

    MyArr(const MyArr &other) {
        cout << "MyArr param constructor  invoke" << endl;
        cout << "MyArr constructor" << endl;
        this->capacity = other.capacity;
        this->size = other.size;

        this->p_addr = new T[other.capacity];
        for (int i = 0; i < this->size; i++) {
            this->p_addr[i] = other.p_addr[i];
        }
    }

    MyArr& operator =(const MyArr &other) {
        cout << "MyArr 'operator ='  invoke" << endl;
        if (this->p_addr != NULL) {
            delete[] this->p_addr;
            this->p_addr = NULL;
            this->capacity = 0;
            this->size = 0;
        }
        this->capacity = other.capacity;
        this->size = other.size;
        this->p_addr = new T[this->capacity];
        for (int i = 0; i < this->size; i++) {
            this->p_addr[i] = other.p_addr[i];
        }
        return *this;
    }

    T operator [](int idx) {
        return this->p_addr[idx];
    }

    void push_back(const T & value) {
        if (this ->capacity == this->size) {
            return;
        }
        this->p_addr[this->size] = value;
        this->size++;
    }

    void pop_back() {
        if (this->capacity == 0) {
            return;
        }
        this->size--;
    }

    int get_size() {
        return this->size;
    }

    int get_capacity() {
        return this->capacity;
    }

};
