/* 
 * File:   main.cpp
 * Author: wander
 *
 * Created on 23 de Janeiro de 2014, 20:58
 */

// class templates
#include <iostream>
using namespace std;

template <class T>
class StackGe {
    int max, head;
    T stack[];
  public:
    StackGe() {
        max = 10;
        head = 0;
    } 
    StackGe(T max) {
        this->max;
        head = 0;
    }
    bool push(T value);
    bool isFull();
    T top();
};

template <class T>
void StackGe<T>::push (T value) {
    stack[++head] = value;
}

template <class T>
bool StackGe<T>::isFull() {
    return size==head;
}

template <class T>
T StackGe<T>::top() {
    return stack[head];
}

int main () {
    StackGe<int> s;
    s.push(2);  
    s.isFull();
    cout << s.top() << endl;
    s.push(3);
    cout << s.top() << endl;
    
  return 0;
}

