#ifndef DYNAMICMEMSTACK_H
#define DYNAMICMEMSTACK_H

#include <iostream>

#include "../StackInterface.h"
#include "../StackableObject.h"
#include "../stackNode/StackNode.h"

class DynamicMemStack: public StackInterface
{
private:
    int size;
    StackNode *top;
public:
    DynamicMemStack();
    virtual ~DynamicMemStack();

    virtual bool push(StackableObject *o) override;
    virtual StackableObject* pop() override;
    virtual int getCount() override;
};

#endif //DYNAMICMEMSTACK_H