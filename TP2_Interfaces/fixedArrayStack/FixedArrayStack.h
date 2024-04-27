/*
Clase FixedArrayStack. Una implementacion de la interfaz StackInterface usando un array estatico de tamaño N.
*/
#ifndef FIXEDARRAYSTACK_H
#define FIXEDARRAYSTACK_H

#include <iostream>

#include "../StackInterface.h"
#include "../StackableObject.h"

#define N 5 //Tamaño maximo de la pila.

class FixedArrayStack: public StackInterface
{
private:
    int index;  //Indice de la pila
    StackableObject* pila[N];   //Array de items
public:
    //Constructor y destructor

    FixedArrayStack();
    virtual ~FixedArrayStack();

    //Funciones implementadas de la interfaz

    virtual bool push(StackableObject* o) override;
    virtual StackableObject* pop() override;
    virtual int getCount() override;
};

#endif //FIXEDARRAYSTACK_H