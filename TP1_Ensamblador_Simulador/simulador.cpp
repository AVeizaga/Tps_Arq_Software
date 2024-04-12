/** @file simulador.cpp
* @brief Simulador, puede ejecutar en modo normal o debug.
* 
* Codigo del simulador, compilar con "g++ simulador.cpp simulator/simulator.cpp codigo/codigo.cpp -o simulador"
* Modo debug puede activarse al ejecutar respondiendo 's'.
*/

#include <iostream>
#include <fstream>

#include "simulator/simulator.h"

using namespace std;

int main(int argc, const char *argv[]){
    ifstream cod;

    //En caso de querer usar otro archivo
    if(argc > 1)
        cod.open(argv[1], ifstream::binary);
    else
        cod.open("out.bin", ifstream::binary);

    string aux;
    cout << "Modo debug?(s/n) ";
    cin >> aux;

    //Abrir el simulador y elegir el modo
    Simulator sim(cod);
    if(aux == "s")
        sim.debug();
    else
        sim.run();

    return 0;
}