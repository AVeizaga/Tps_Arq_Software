/*
Clase DynamicMemStack. Una implementacion de la interfaz StackInterface usando memoria dinamica.
Los nodos del stack son tipo StackNode y cada uno contiene un puntero de tipo StackableObject.
*/

#ifndef DYNAMICMEMSTACK_H
#define DYNAMICMEMSTACK_H

#include <iostream>

#include "../StackInterface.h"
#include "../StackableObject.h"
#include "../stackNode/StackNode.h"

class DynamicMemStack: public StackInterface
{
private:
    int size;   //Tamaño del stack
    StackNode *top; //Nodo superior
public:
    //Constructor y destructor
    
    DynamicMemStack();
    virtual ~DynamicMemStack();

    //Funciones implementadas de la interfaz

    virtual bool push(StackableObject *o) override;
    virtual StackableObject* pop() override;
    virtual int getCount() override;
};

#endif //DYNAMICMEMSTACK_H