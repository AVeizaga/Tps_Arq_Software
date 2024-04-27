/*
Clase Vehiculo. Implementacion de la interfaz StackableObject.
*/
#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>

#include "../StackableObject.h"

using namespace std;

class Vehiculo: public StackableObject
{
private:
    int cantRuedas;
    bool tieneBaul;
    float cilindrada;
public:
    Vehiculo(int rue, bool baul, float cil);
    virtual ~Vehiculo();

    void mostrarEnPantalla() override;

    //gets
    int getCantRuedas();
    bool getTieneBaul();
    float getCilindrada();

    //sets
    void setCantRuedas(int cant);
    void setTieneRuedas(bool val);
    void setCilindrada(float cil);
};




#endif //VEHICULO_H