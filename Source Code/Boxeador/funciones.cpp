#include "boxeador.h"
#include <vector>

boxeador::boxeador(){
    vida=true;
}
void boxeador::registro(){
    std::cout << "Ingrese nombre" << std::endl;
    std::cin >> nombre;
    resistencia =rand() % 10+5;
    std::cout << nombre << " Tu resistencia será: " << resistencia << std::endl;
}

void boxeador::registro_oponente(){
    int indicador;
    std::cout << "ingresa un numero del 1 al 5" << std::endl;
    std::cin >> indicador;
    indicador=indicador-1;

    std::vector<std::string> oponentes;
    oponentes[0]= "Happy Lora";
    oponentes[1] = "Shaws Michels";
    oponentes[2] = "The Underker";
    oponentes[3] = "The Great Kalhi";
    oponentes[4] = "Dirty Face";

    nombre = oponentes[indicador];
    std::cout << "Tu oponente es: " << nombre << std::endl;


}

