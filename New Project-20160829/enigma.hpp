#ifndef __ENIGMA_HPP__
#define __ENIGMA_HPP__

#include <iostream>

class Walze {
    const std::string Verdrahtung;
    const std::string Kerbe;
    public:
        char GrundStellung;
        char RingStellung;
        Walze(std::string v, std::string k);
        const std::string getVerdrahtung();
        const std::string getKerbe();
};

Walze::Walze(std::string v, std::string k) : Verdrahtung(v), Kerbe(k){
}

inline const std::string Walze::getVerdrahtung(){
    return Verdrahtung;
}
inline const std::string Walze::getKerbe() {
    return Kerbe;
}

#endif /* __ENIGMA_HPP__ */