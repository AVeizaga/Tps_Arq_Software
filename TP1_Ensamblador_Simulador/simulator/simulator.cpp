#include "simulator.h"

int Simulator::accessValor() const{
    string line = this->getInstruccion();
    if(line[2] == 'f')  //Extensor de signo
        return int(stoul("fff" + line.substr(3, line.length()), nullptr, 16));
    return stoi(line.substr(3, line.length()), nullptr, 16);
}

int Simulator::accessOpcode() const{
    return stoi((this->getInstruccion()).substr(0, 2), nullptr, 16);
}


void Simulator::executeInstruccion(){
    switch (this->getOpcode()){
        case 1: //LOAD
            this->acc = this->getValor();
            break;
        case 2: //ADD
            this->acc += this->getValor();
            break;
        case 3: //PRINT
            cout << this->acc << endl;
            break;
        case 0:
            cout << "END" << endl;
            break;
        default:
            cout << "OPCODE NO VALIDO!" << endl;
            break;
    }

    this->siguienteInstruccion();
}

Simulator::Simulator(ifstream& input):Codigo(input){
    this->acc = 0;
}

Simulator::~Simulator(){
}

void Simulator::run(){
    while(!this->isDone()){
        this->executeInstruccion();
    }
}

void Simulator::debug(){
    char aux;
    while(!this->isDone()){
        cout << this->decodeOpcode(this->getOpcode());  //Tipo de instruccion
        if((this->getOpcode() != 0) && (this->getOpcode() != 3))
            cout << " " << this->getValor();
        cout << endl;


        cout << "PC: " << this->getPC() << endl;
        cout << "ACC: " << this->acc << endl;
        
        cout << endl;
        
        this->executeInstruccion();

        cout << endl;

        cin >> aux;
    }
}