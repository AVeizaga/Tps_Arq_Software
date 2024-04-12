/** @file ensambledor.cpp
* @brief Ensablador de codigo.
* 
* Codigo del ensamblador, compilar con "g++ ensamblador.cpp assembler/assembler.cpp codigo/codigo.cpp -o ensamblador"
*/

#include <iostream>
#include <fstream>

#include "assembler/assembler.h"

using namespace std;

int main(int argc, const char *argv[]){
    Assembler en;
    
    if(argc == 3)   //En caso de querer usar otros archivos
        en.assemble(argv[1], argv[2]);
    else    //Por defecto
        en.assemble("in.txt", "out.bin");

    return 0;
}