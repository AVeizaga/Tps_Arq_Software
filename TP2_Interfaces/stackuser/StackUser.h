/*
Clase StackUser. Solo sirve para probar los stacks. Recibe un puntero al stack y luego se puede llenar y vaciar el mismo.
*/
#ifndef STACKUSER_H
#define STACKUSER_H

#include <iostream>

#include "../StackInterface.h"
#include "../vehiculo/Vehiculo.h"

class StackUser
{
private:
    StackInterface* stack;
public:
    StackUser(StackInterface* stack);
    virtual ~StackUser();

    void cargarPila();
    void imprimirPila();
};





#endif //STACKUSER_H