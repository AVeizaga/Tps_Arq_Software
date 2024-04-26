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