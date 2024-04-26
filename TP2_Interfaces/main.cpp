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