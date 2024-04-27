/*
g++ main.cpp dynamicMemStack/DynamicMemStack.cpp fixedArrayStack/FixedArrayStack.cpp stackNode/StackNode.cpp stackuser/StackUser.cpp vehiculo/Vehiculo.cpp

Me gustaría aprender a usar makefiles para no tener que hacer lo de arriba, pero no tuve tiempo. Disculpas.

Se crean dos stacks, uno para cada implementación. Se llenan con elementos y después se vacian.
*/
#include <iostream>

#include "stackuser/StackUser.h"
#include "fixedArrayStack/FixedArrayStack.h"
#include "dynamicMemStack/DynamicMemStack.h"

int main()
{
    DynamicMemStack memStack;
    FixedArrayStack fixedStack;

    StackUser userDynamic(&memStack), userStatic(&fixedStack);

    userDynamic.cargarPila();
    userStatic.cargarPila();

    userDynamic.imprimirPila();
    cout << endl;
    userStatic.imprimirPila();
    
    return 0;
}