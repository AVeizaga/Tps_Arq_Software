#include <stdexcept>
#include "FixedArrayStack.h"

/// @brief Constructor de FixedArrayStack
FixedArrayStack::FixedArrayStack()
{
    this->index = -1;

    for(int i = 0; i < N; i++)
        this->pila[i] = NULL;
}

/// @brief Destructor de FixedArrayStack
FixedArrayStack::~FixedArrayStack()
{
}

bool FixedArrayStack::push(StackableObject* o){
    if(this->index >= (N - 1))
    {
        return false;
    }
    
    this->index++;
    this->pila[this->index] = o;

    return true;
}


StackableObject* FixedArrayStack::pop()
{
    if(this->index > -1)
    {   
        this->index--;
        return this->pila[this->index + 1];
    }
    return NULL;
}


int FixedArrayStack::getCount()
{
    return this->index + 1;
}