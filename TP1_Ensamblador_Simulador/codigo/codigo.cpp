#include "codigo.h"

int Codigo::accessValor() const{
    string line = this->getInstruccion();
    if(line != "PRINT")
        return stoi(line.substr(line.find(' '), line.length()));
    return 0;
}

int Codigo::accessOpcode() const{
    string line = this->getInstruccion();
    if(line != "PRINT"){
        line = line.substr(0, line.find(' '));  //Tomar instruccion
    }

    return this->decodeOpcode(line);
}

int Codigo::decodeOpcode(string i) const{
    if(i == "LOAD")
        return 1;
    else if(i == "ADD")
        return 2;
    else if(i == "PRINT")
        return 3;
    
    return 0;
}

string Codigo::decodeOpcode(int i) const{
    if(i == 1)
        return "LOAD";
    else if(i == 2)
        return "ADD";
    else if(i == 3)
        return "PRINT";
    else if(i == 0)
        return "END";
    return "NULL";
}

/// @brief Constructor de la clase. 
/// @param input Stream del archivo de entrada.
/// @param mode Modo de la entrada, opciones validas "binario"/"texto".
Codigo::Codigo(ifstream& input):input_file(input){
    this->PC = 1;
    this->eof[0] = false;
    this->eof[1] = false;
    getline(this->input_file, this->inst_actual);
}

/// @brief Destructor. Se debe cerrar el archivo al finalizar el programa.
Codigo::~Codigo(){}

/// @brief Mueve a la siguiente instruccion. Incrementa el PC en 1.
void Codigo::siguienteInstruccion(){
    getline(this->input_file, this->inst_actual); 
    this->eof[1] = this->eof[0];
    this->eof[0] = input_file.eof();
    if(!isDone())
        (this->PC)++;
}

/// @brief Devuelve la instruccion actual.
/// @return Linea de instruccion en string. Tal cual está en al archivo. 
string Codigo::getInstruccion() const{
    return this->inst_actual;
}
 
int Codigo::getOpcode() const{
    return this->accessOpcode();
}

int Codigo::getValor() const{
    return this->accessValor();
}

int Codigo::getPC() const{
    return this->PC;
}

bool Codigo::isDone() const{
    return (this->eof[0] && this->eof[1]);
}

 