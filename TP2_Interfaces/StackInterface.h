/*
Interfaz StackInterface. Implementada con FixedArrayStack y DynamicMemStack.
*/
#ifndef STACKINTERFACE_H
#define STACKINTERFACE_H

#include "StackableObject.h"

using namespace std;

class StackInterface{
public:
    virtual bool push(StackableObject* o) = 0;
    virtual StackableObject* pop() = 0;
    virtual int getCount() = 0;
};



#endif  //STACKINTERFACE_H