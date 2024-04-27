/*
Clase StackNode. Nodos enlazos usados para la implementacion de DynamicMemStack.
*/
#ifndef STACKNODE_H
#define STACKNODE_H

#include <iostream>

#include "../StackableObject.h"

class StackNode
{
private:
    StackableObject* item;  //Item del nodo.
    StackNode* prev;    //Puntero al nodo anterior.
public:
    StackNode(StackableObject* i);
    virtual ~StackNode();

    StackNode* getPrevNode();
    void setPrevNode(StackNode* node);
    StackableObject* getObject();
};


#endif //STACKNODE_H