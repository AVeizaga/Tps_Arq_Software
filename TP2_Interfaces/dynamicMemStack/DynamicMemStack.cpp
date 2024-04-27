#include "DynamicMemStack.h"

/// @brief Constructor. Inicializa un stack vacio.
DynamicMemStack::DynamicMemStack()
{
    this->size = 0;
    this->top = NULL;
}

/// @brief Destructor. Se vacia el stack, no se eliminan los StackableObject que hayan estado en el stack.
DynamicMemStack::~DynamicMemStack()
{
    while(this->getCount() != 0)
        this->pop();
}

/// @brief Coloca un nuevo item en la parte superior de la pila.
/// @param o StackableObject para pushear
/// @return True para push correctos. False para errores de reserva de memoria.
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

/// @brief Devuelve y quita el item en la cima de la pila.
/// @return El item correspondiente, o NULL en caso contrario.
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

/// @brief Devuelve el tamaño de la pila.
/// @return El tamaño de la pila.
int DynamicMemStack::getCount()
{
    return this->size;
}