/* 
 * File:   main.cpp
 * Author: wander
 *
 * Created on 23 de Janeiro de 2014, 20:58
 */
#include <iostream>
using namespace std;

template <class T>
class StackGe {
    int head, max;
    T stack[10];
  public:
    StackGe() {
        max = 10;
        head = 0;
    } 

    StackGe(int max) {
        this->max = max;
        head = 0;
    }
    bool isEmpty();
    bool isFull();
    int size();
    T top();
    void push(T value);
    T pop();
    void clear();
    T print();
};
template <class T>
bool StackGe<T>::isEmpty() {
    return head==0;
}

template <class T>
T StackGe<T>::top() {
    if(isEmpty() == false)
        return stack[head];
}

template <class T>
bool StackGe<T>::isFull() {
    return head==max;
}

template <class T>
int StackGe<T>::size() {
   return head; 
}

template <class T>
void StackGe<T>::push(T value) {
    //Adicionar tratamento de exceção
    stack[++head] = value;
}

template <class T>
T StackGe<T>::pop() {
    //Adicionar tratamento de exceção    
    return stack[head--];
}

template <class T>
void StackGe<T>::clear() {
    head = 0;
}

template <class T>
T StackGe<T>::print() {
    while(isEmpty() == false) {
        cout << pop() << endl; 
    }
}

int main () {
  StackGe<int> s;  
  
  return 0;
}


