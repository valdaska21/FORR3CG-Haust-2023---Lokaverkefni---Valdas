#include "Flugferd.hpp"

Flugferd::Flugferd(){
    this->hvert = "";
}

Flugferd::Flugferd(int id, int fjoldibokad, int hamarksfjoldi, std::string hvert) : Ferd(id, fjoldibokad, hamarksfjoldi) {
    this->hvert = hvert;
}

std::string Flugferd::getHvert(){
    return this->hvert;
}

void Flugferd::setHvert(std::string nytt_hvert){
    this->hvert = hvert;
}

void Flugferd::prenta(){
    std::cout << "Flugferð| ID: " << this->getId() << ", Fjöldi Bókað: " << this->getFjoldibokad() << ", Hámarksfjoldi: " << this->getHamarksfjoldi() << ", Hvert: " << this->hvert << std::endl;
}
