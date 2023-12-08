#include "Ferdlinkedlist.hpp"
#include "FerdNode.hpp"

Ferdlinkedlist::Ferdlinkedlist() {
    this->head = nullptr;
}

void Ferdlinkedlist::skraRadad(Ferd* ferdin) {
    FerdNode* nytt_node = new FerdNode(ferdin);
    if(!this->head) {
        this->head = nytt_node;
    } else {
        if(*this->head->ferdin > *ferdin) {
            nytt_node->next = this->head;
            this->head = nytt_node;
        } else {
            FerdNode* current = this->head;
            FerdNode* prev = this->head;
            while(current && *current->ferdin <= *ferdin) {
                prev = current;
                current = current->next;
            }
            nytt_node->next = current;
            prev->next = nytt_node;
        }
    }
}

void Ferdlinkedlist::skraBatsferd(int id, int fjoldibokad, int hamarksfjoldi, bool yfirbyggdur) {
    this->skraRadad(new Batsferd(id, fjoldibokad, hamarksfjoldi, yfirbyggdur));
}

void Ferdlinkedlist::skraFlugferd(int id, int fjoldibokad, int hamarksfjoldi, std::string hvert) {
    this->skraRadad(new Flugferd(id, fjoldibokad, hamarksfjoldi, hvert));
}

void Ferdlinkedlist::skraHjolaferd(int id, int fjoldibokad, int hamarksfjoldi, int lengdklst) {
    this->skraRadad(new Hjolaferd(id, fjoldibokad, hamarksfjoldi, lengdklst));
}

void Ferdlinkedlist::prentaAllt() {
    FerdNode* current = this->head;
    while(current) {
        current->ferdin->prenta();
        current = current->next;
    }
}

void Ferdlinkedlist::prentaAlltBferd() {
    FerdNode* current = this->head;
    while(current) {
        if(current->ferdin->getType() == "Bátsferð") {
            current->ferdin->prenta();
        }
        current = current->next;
    }
}

void Ferdlinkedlist::prentaAlltFferd() {
    FerdNode* current = this->head;
    while(current) {
        if(current->ferdin->getType() == "Flugferð") {
            current->ferdin->prenta();
        }
        current = current->next;
    }
}


void Ferdlinkedlist::prentaAlltHferd() {
    FerdNode* current = this->head;
    while(current) {
        if(current->ferdin->getType() == "Hjólaferð") {
            current->ferdin->prenta();
        }
        current = current->next;
    }
}



void Ferdlinkedlist::breytaFjoldibokad(int id, int nytt_fjoldibokad) {
    FerdNode* current = this->head;
    while(current) {
        if(current->ferdin->getId() == id) {
            if(current->ferdin->getHamarksfjoldi() < nytt_fjoldibokad) {
                std::cout << "Ekki er hægt að bóka fleirum heldur en hámarksfjöldinn leyfir!" << std::endl;
            } else {
                current->ferdin->setFjoldibokad(nytt_fjoldibokad);
                return;
            }
        }
        current = current->next;
    }
}

void Ferdlinkedlist::eydaAkvednum(int id) {
    if(this->head) {
        if(this->head->ferdin->getId() == id) {
            FerdNode* nytt_head = this->head->next;
            delete this->head;
            this->head = nytt_head;
        } else {
            FerdNode* current = this->head;
            FerdNode* prev = this->head;
            while(current && current->ferdin->getId() != id) {
                prev = current;
                current = current->next;
            }
            if(current) {
                prev->next = current->next;
                delete current;
            }
        }
    }
}

int Ferdlinkedlist::skodaAkvedinn(int id) {
    if(this->head) {
        FerdNode* current = this->head;
        while(current) { // while(current != nullptr)
            if(current->ferdin->getId() == id) {
                current->ferdin->prenta();
            }
            current = current->next;
        }
    }
    return -1;
}

Ferdlinkedlist::~Ferdlinkedlist() {
    while(this->head) {
        FerdNode* nytt_head = this->head->next;
        // delete this->head->dyrid
        delete this->head;
        this->head = nytt_head;
    }
}
