#include "Ferd.hpp"

Ferd::Ferd() {
    this->id = -1;
    this->fjoldibokad = 0;
    this->hamarksfjoldi = 0;
}

Ferd::Ferd(int id, int fjoldibokad, int hamarksfjoldi) {
    if (fjoldibokad > hamarksfjoldi){
        std::cout << "Ekki er hægt að bóka fleirum heldur en hámarksfjöldinn leyfir!" << std::endl;
    } else {
        this->id = id;
        this->fjoldibokad = fjoldibokad;
        this->hamarksfjoldi = hamarksfjoldi;
    }
    
}

int Ferd::getId() {
    return this->id;
}

void Ferd::setId(int nytt_id) {
    this->id = nytt_id;
}

int Ferd::getFjoldibokad() {
    return this->fjoldibokad;
}

void Ferd::setFjoldibokad(int nyr_fjoldibokad) {
    if (nyr_fjoldibokad > hamarksfjoldi){
        std::cout << "Ekki er hægt að bóka fleirum heldur en hámarksfjöldinn leyfir!" << std::endl;
    } else {
       this->fjoldibokad = nyr_fjoldibokad; 
    }
    
}

int Ferd::getHamarksfjoldi() {
    return this->hamarksfjoldi;
}

int Ferd::setHamarksfjoldi(int nyr_hamarksfjoldi) {
    this->hamarksfjoldi = nyr_hamarksfjoldi;
}

void Ferd::prenta() {
    std::cout << "Ferð| ID: " << this->id << ", Fjöldi Bókað: " << this->fjoldibokad << ", Hámarksfjoldi: " << this->hamarksfjoldi << std::endl;
}

bool Ferd::operator==(Ferd& hitt) {
    return this->id == hitt.getId() && this->hamarksfjoldi == hitt.getHamarksfjoldi();
}

bool Ferd::operator!=(Ferd& hitt) {
    return !(*this == hitt);
}

bool Ferd::operator<(Ferd& hitt) {
    if(this->getHamarksfjoldi() == hitt.getHamarksfjoldi()) {
        return this->id < hitt.getId();
    } 
    return this->hamarksfjoldi < hitt.getHamarksfjoldi();
}

bool Ferd::operator>(Ferd& hitt) {
    return hitt < *this;
}

bool Ferd::operator<=(Ferd& hitt) {
    return !(*this > hitt);
}

bool Ferd::operator>=(Ferd& hitt) {
    return !(*this < hitt);
}