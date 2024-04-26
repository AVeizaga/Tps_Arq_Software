#ifndef STACKNODE_H
#define STACKNODE_H

#include <iostream>

#include "../StackableObject.h"

class StackNode
{
private:
    StackableObject* item;
    StackNode* prev;
public:
    StackNode(StackableObject* i);
    virtual ~StackNode();

    StackNode* getPrevNode();
    void setPrevNode(StackNode* node);
    StackableObject* getObject();
};


#endif //STACKNODE_H