#include "DynamicMemStack.h"

DynamicMemStack::DynamicMemStack()
{
    this->size = 0;
    this->top = NULL;
}

DynamicMemStack::~DynamicMemStack()
{
    while(this->getCount() != 0)
        this->pop();
}

bool DynamicMemStack::push(StackableObject *o)
{
    StackNode* nuevo = new StackNode(o);
    if(nuevo == NULL)
    {
        return false;
    }

    nuevo->setPrevNode(this->top);
    this->top = nuevo;
    this->size++;

    return true;
}

StackableObject* DynamicMemStack::pop()
{
    StackNode* temp = NULL;
    StackableObject* ret = NULL;

    if(this->size > 0){
        temp = this->top;

        this->top = (this->top)->getPrevNode();
        
        ret = temp->getObject();
        delete temp;
        this->size--;
    }
    return ret;
}

int DynamicMemStack::getCount()
{
    return this->size;
}