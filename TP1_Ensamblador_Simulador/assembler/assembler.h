/*
Clase Assembler. Puede tomar archivos de texto y convertilos en binario.
Usa la clase Codigo para acceder y convertir los archivos.
*/

#ifndef ASSEMBLER_H
#define ASSEMBLER_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "../codigo/codigo.h"

using namespace std;

class Assembler{
private:
public:
    Assembler();
    virtual ~Assembler();
    
    void assemble(string file_in, string file_out);
};

#endif  //ASSEMBLER_H

