#include "Hjolaferd.hpp"

Hjolaferd::Hjolaferd() {
    this->lengdklst = 0;
}

Hjolaferd::Hjolaferd(int id, int fjoldibokad, int hamarksfjoldi, int lengdklst) : Ferd(id, fjoldibokad, hamarksfjoldi) {
    this->lengdklst = lengdklst;
}

int Hjolaferd::getLengdklst() {
    return this->lengdklst;
}

void Hjolaferd::setLengdklst(int nytt_lengdklst) {
    this->lengdklst = nytt_lengdklst;
}

void Hjolaferd::prenta() {
    std::cout << "Hjolaferð| ID: " << this->getId() << ", Fjöldi Bókað: " << this->getFjoldibokad() << ", Hámarksfjoldi: " << this->getHamarksfjoldi() << ", Tími í Klst.: " << this->lengdklst << std::endl;
}

std::string Hjolaferd::getType() {
    return "Hjólaferð";
}

std::ostream& operator<<(std::ostream& ostr, Hjolaferd& ferd) {
    return ostr << "Hjólaferð| ID: " << ferd.getId() << ", Fjöldi bókað: " << ferd.getFjoldibokad() << ", Hámarksfjöldi: " << ferd.getHamarksfjoldi() << ", Yfirbyggður: " << ferd.getLengdklst();       
}