/* 
 * File:   StackGe.cpp
 * Author: wander
 * 
 * Created on 4 de Fevereiro de 2014, 19:43
 */
#include <iostream>
#include "StackGe.h"

using namespace std;

template <class T>
StackGe<T>::StackGe() {
        max = 10;
        head = -1;
        stack = new T[max];
    }

template <class T>
StackGe<T>::StackGe(int max) {
        this->max = max;
        head = 0;
        stack = new T[max];
    }

template <class T>
StackGe<T>::~StackGe() {
    delete[] stack;
}

template <class T>
bool StackGe<T>::isEmpty() {
    return head == -1;
}

template <class T>
T StackGe<T>::top() {
    if (isEmpty() == false)
        return stack[head];
}

template <class T>
bool StackGe<T>::isFull() {
    return head == max;
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
    T aux[max];
    int i = -1;
    while (isEmpty() == false) {
        aux[++i] = pop();
        cout << aux[i] << endl;
    }
    while(i > -1){
        push(aux[i--]);
    }
}