#include <iostream>
#include "Node.h"
using namespace std;


template<typename T>
Node<T>::Node(T _value){
    prev = nullptr;
    value = _value;
    next = nullptr;
    }


template<typename T>
Node<T>::Node(){
    value = NULL;
    next = nullptr;
    prev = nullptr;
    }


template<typename T>
Node<T>::Node(Node <T>* _prev ,T _value){
    prev = _prev;
    value = _value;
    next = nullptr;
    }


template<typename T>
void Node<T>::print(){
        cout << value << " ";
    }
