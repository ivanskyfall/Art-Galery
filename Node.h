#include <iostream>
using namespace std;

#ifndef NODE_H
#define NODE_H


template <class T>class Node{
    public:
    T value;
    Node* next = nullptr;
    Node* prev = nullptr;

    Node(T);
    Node();
    Node(Node <T>*,T);

    void print();

    ~Node();
};


#endif 

