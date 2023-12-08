#pragma once

#include <string>
#include "FerdNode.hpp"
#include "Ferd.hpp"
#include "Batsferd.hpp"
#include "Flugferd.hpp"
#include "Hjolaferd.hpp"

class Ferdlinkedlist {
    private:
        FerdNode* head;
    public:
        Ferdlinkedlist();
        void skraRadad(Ferd* ferdin);
        void skraBatsferd(int id, int fjoldibokad, int hamarksfjoldi, bool yfirbyggdur);
        void skraFlugferd(int id, int fjoldibokad, int hamarksfjoldi, std::string hvert);
        void skraHjolaferd(int id, int fjoldibokad, int hamarksfjoldi, int lengdklst);
        void prentaAllt();
        void breytaFjoldibokad(int id, int nytt_fjoldibokad);
        void eydaAkvednum(int id);
        int skodaAkvedinn(int id);
        ~Ferdlinkedlist();
};
