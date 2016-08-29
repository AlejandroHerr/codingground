#include <iostream>
#include "enigma.hpp"

Walze::Walze(std::string v, std::string k) : Verdrahtung(v), Kerbe(k){
    GrundStellung = 'A';
    RingStellung = 'A';
}