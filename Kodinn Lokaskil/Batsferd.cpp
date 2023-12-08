#include "Batsferd.hpp"

Batsferd::Batsferd(){
    this->yfirbyggdur = false;
}

Batsferd::Batsferd(int id, int fjoldibokad, int hamarksfjoldi, bool yfirbyggdur) : Ferd(id, fjoldibokad, hamarksfjoldi) {
    this->yfirbyggdur = yfirbyggdur;
}

bool Batsferd::getYfirbyggdur(){
    return this->yfirbyggdur;
}

void Batsferd::setYfirbyggdur(bool nytt_boolvalue){
    this->yfirbyggdur = nytt_boolvalue;
}

void Batsferd::prenta(){
    std::cout << "Bátsferð| ID: " << this->getId() 
              << ", Fjöldi Bókað: " << this->getFjoldibokad() 
              << ", Hámarksfjoldi: " << this->getHamarksfjoldi() 
              << ", Yfirbyggður: " << this->yfirbyggdur << std::endl;
}

std::string Batsferd::getType() {
    return "Bátsferð";
}
