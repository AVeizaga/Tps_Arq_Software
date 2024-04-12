/*
Clase Simulator. Toma un archivo de texto para ejecutar las instrucciones.
Se espera formato binario y admite modo normal y debug.
*/

#ifndef SIMULADOR_H
#define SIMULADOR_H

#include <iostream>
#include <fstream>

#include "../codigo/codigo.h"

using namespace std;

class Simulator: public Codigo{
private:
    int acc;    //Registro de acumulador

    virtual int accessValor() const override;   //Override para poder leer datos en hexa
    virtual int accessOpcode() const override;  //Override para poder leer datos en hexa

    void executeInstruccion();
public:
    //Constructor y destructor
    Simulator(ifstream& input);
    virtual ~Simulator();

    //Modos de correr el simulador
    void run();
    void debug();
};


#endif  //SIMULADOR_H