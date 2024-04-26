#include "StackUser.h"

StackUser::StackUser(StackInterface* stack)
{
    this->stack = stack;
}

StackUser::~StackUser()
{
}

void StackUser::cargarPila()
{
    Vehiculo* v[6];

    v[0] = new Vehiculo(2, false, 180);
    v[1] = new Vehiculo(4, false, 190);
    v[2] = new Vehiculo(18, true, 100);
    v[3] = new Vehiculo(1, false, 5000);
    v[4] = new Vehiculo(6, true, 1800);
    //v[5] = new Vehiculo(6, true, 1800);

    for(int i = 0; i < 5; i++)
    {
        this->stack->push(v[i]);
    }
}

void StackUser::imprimirPila()
{   
    StackableObject* temp;
    while(this->stack->getCount() != 0)
    {
        temp = this->stack->pop();
        temp->mostrarEnPantalla();
        delete temp;
    }
}