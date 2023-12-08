#pragma once

#include <iostream>
#include <string>

#include "Ferd.hpp"

class Flugferd : public Ferd {
    private:
        std::string hvert;
    public:
        Flugferd();
        Flugferd(int id, int fjoldibokad, int hamarksfjoldi, std::string hvert);
        std::string getHvert();
        void setHvert(std::string nytt_hvert);
        void prenta();
};