#include <stdexcept>
#include "FixedArrayStack.h"

/// @brief Constructor. Crea un stack vacio.
FixedArrayStack::FixedArrayStack()
{
    this->index = -1;

    for(int i = 0; i < N; i++)
        this->pila[i] = NULL;
}

/// @brief Destructor. Los elementos en la pila no son eliminados, solo la pila misma.
FixedArrayStack::~FixedArrayStack()
{
}

/// @brief Coloca un nuevo item en la cima de la pila.
/// @param o Item a colocar.
/// @return True para push correcto. False para push con pila llena.
bool FixedArrayStack::push(StackableObject* o)
{
    if(this->index >= (N - 1))
    {
        return false;
    }
    
    this->index++;
    this->pila[this->index] = o;

    return true;
}

/// @brief Devuelve y quita el elemento en la cima de la pila.
/// @return El elemento correspondiente. NULL en caso contrario.
StackableObject* FixedArrayStack::pop()
{
    StackableObject *temp;

    if(this->index > -1)
    {   
        temp = this->pila[this->index];
        this->pila[this->index] = NULL;
        this->index--;
        return temp;
    }

    return NULL;
}

/// @brief Devuelve el tamaño de la pila.
/// @return El tamaño de la pila.
int FixedArrayStack::getCount()
{
    return this->index + 1;
}