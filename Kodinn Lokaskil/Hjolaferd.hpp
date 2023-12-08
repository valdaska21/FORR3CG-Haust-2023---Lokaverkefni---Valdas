#pragma once

#include <iostream>
#include <string>

#include "Ferd.hpp"

class Hjolaferd : public Ferd {
    private:
        int lengdklst;
    public:
        Hjolaferd();
        Hjolaferd(int id, int fjoldibokad, int hamarksfjoldi, int lengdklst);
        int getLengdklst();
        void setLengdklst(int nytt_lengdklst);
        void prenta();
};