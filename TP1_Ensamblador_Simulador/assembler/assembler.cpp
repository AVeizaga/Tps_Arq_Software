#include "assembler.h"

Assembler::Assembler(){
}

Assembler::~Assembler(){
}

void Assembler::assemble(string file_in, string file_out){
    //Definir los streams
    ifstream in(file_in, ifstream::in);
    ofstream out(file_out, ofstream::binary);
    
    Codigo cod(in); //Objeto codigo
    out << hex;
    out << setfill('0');

    //Recorrer el archivo y pasarlo a hex
    while(!cod.isDone()){
        out << setw(2);
        out << cod.getOpcode();

        out << setw(6);
        out << (cod.getValor() & 0xffffff); //Mascara para limitar el output
        out << endl;

        cod.siguienteInstruccion();
    }
    out << setw(8);
    out << 0;  //Para cerrar el archivo
    in.close();
    out.close();
}