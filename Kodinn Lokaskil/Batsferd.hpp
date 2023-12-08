#pragma once

#include <iostream>
#include <string>

#include "Ferd.hpp"

class Batsferd : public Ferd {
    private:
        bool yfirbyggdur;
    public:
        Batsferd();
        Batsferd(int id, int fjoldibokad, int hamarksfjoldi, bool yfirbyggdur);
        bool getYfirbyggdur();
        void setYfirbyggdur(bool nytt_boolvalue);
        void prenta();
};