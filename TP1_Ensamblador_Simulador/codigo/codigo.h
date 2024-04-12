/*
Clase Codigo. Permite tomar un archivo de texto e iterar sobre el mismo
se espera una instruccion por linea de texto. Se asume tambien que el codigo
está en assembler. Se proveen algunas funciones para ir de assembler a binario.
*/

#ifndef CODIGO_H
#define CODIGO_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Sin uso por ahora
enum class Instruccion{
            LOAD = 1,
            ADD,
            PRINT
        };

class Codigo{
    private:
        ifstream& input_file;   //Stream del archivo de entrada
        
        int PC; //Program counter
        string inst_actual; //Instruccion actual

        bool eof[2];    //Usado para ver si el programa llego al final *Buscar otra solucion

        virtual int accessValor() const;
        virtual int accessOpcode() const;
    public:
        //Constructor y destructor
        Codigo(ifstream& input);
        virtual ~Codigo();

        //Control
        void siguienteInstruccion(); //Mueve a la siguiente instruccion

        //Interfaz
        string getInstruccion() const;  //Lee la instruccion actual
        int getValor() const;    //Devuelve el valor de la instruccion
        int getOpcode() const;  //Devuelve el numero de instruccion
        int getPC() const;  //devuelve el PC
        bool isDone() const; //Revisa si hay mas instrucciones

        //Utilidades
        string decodeOpcode(int i) const;   //Para pasar de hex a txt
        int decodeOpcode(string i) const;   //Para pasar de txt a hex
};



#endif //CODIGO_H