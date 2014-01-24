/* 
 * File:   StackGe.cpp
 * Author: wander
 * 
 * Created on 23 de Janeiro de 2014, 21:42
 */

#include "StackGe.h"

StackGe::StackGe() {
    stack[10] = {};
    top = 1;
}

StackGe::StackGe(int size) {
    stack[size] = {};
    top = 1;
}

StackGe::~StackGe() {
}

