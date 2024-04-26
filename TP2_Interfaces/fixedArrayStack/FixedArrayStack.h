#ifndef FIXEDARRAYSTACK_H
#define FIXEDARRAYSTACK_H

#include <iostream>

#include "../StackInterface.h"
#include "../StackableObject.h"

#define N 5 //Tamaño maximo de la pila.

class FixedArrayStack: public StackInterface
{
private:
    int index;
    StackableObject* pila[N];
public:
    FixedArrayStack();
    virtual ~FixedArrayStack();

    virtual bool push(StackableObject* o) override;
    virtual StackableObject* pop() override;
    virtual int getCount() override;
};

#endif //FIXEDARRAYSTACK_H