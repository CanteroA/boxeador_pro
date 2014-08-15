#ifndef BOXEADOR_H
#define BOXEADOR_H
#include <iostream>
#include "stdio.h"
#include <stdlib.h>
#include <vector>
#include <string>


class boxeador{
public:
    int resistencia;
    bool vida;
    boxeador();
    std::string nombre;
    int ataque;
    void registro();
    void registro_oponente();
    std::string boxeador_oponente;



};





#endif // BOXEADOR_H
