/* 
 * File:   Element.h
 * Author: wander
 *
 * Created on 23 de Janeiro de 2014, 21:38
 */

#ifndef ELEMENT_H
#define	ELEMENT_H

template <class generic>
class Element {
public:
    Element(generic value);
    virtual ~Element();
private:
    generic value;
};

#endif	/* ELEMENT_H */

