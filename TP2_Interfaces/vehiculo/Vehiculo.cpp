#include "Vehiculo.h"

Vehiculo::Vehiculo(int rue, bool baul, float cil)
{
    this->cantRuedas = rue;
    this->tieneBaul = baul;
    this->cilindrada = cil;
}

Vehiculo::~Vehiculo()
{
}

//No se ve muy bien en consola
void Vehiculo::mostrarEnPantalla()
{
    cout << "El vehiculo tiene: " << endl;
    cout << "-Cantidad de ruedas: " << this->cantRuedas << endl;
    cout << "-Tiene baul?: " << this->tieneBaul << endl;
    cout << "-Cilindrada: " << this->cilindrada << endl;
    cout << endl;
}

int Vehiculo::getCantRuedas()
{
    return this->cantRuedas;
}

bool Vehiculo::getTieneBaul()
{
    return this->tieneBaul;
}

float Vehiculo::getCilindrada()
{
    return this->cilindrada;
}

void Vehiculo::setCantRuedas(int cant)
{
    this->cantRuedas = cant;
}

void Vehiculo::setTieneRuedas(bool val)
{
    this->tieneBaul = val;
}

void Vehiculo::setCilindrada(float cil)
{
    this->cilindrada = cil;
}