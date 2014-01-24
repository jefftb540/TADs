/* 
 * File:   StackGe.h
 * Author: wander
 *
 * Created on 23 de Janeiro de 2014, 21:42
 */

#ifndef STACKGE_H
#define	STACKGE_H

class StackGe {
public:
    StackGe();
    StackGe(int size);
    virtual ~StackGe();
private:
    Element stack[];
    int size;
    int top;
};

#endif	/* STACKGE_H */

