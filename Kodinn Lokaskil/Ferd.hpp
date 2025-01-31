#pragma once

#include <string>
#include <iostream>

class Ferd {
    private:
        int id;
        int fjoldibokad;
        int hamarksfjoldi;
    public:
        Ferd();
        Ferd(int id, int fjoldibokad, int hamarksfjoldi);
        int getId();
        void setId(int nytt_id);
        int getFjoldibokad();
        void setFjoldibokad(int nyr_fjoldibokad);
        int getHamarksfjoldi();
        void setHamarksfjoldi(int nyr_hamarksfjoldi);
        virtual void prenta();
        virtual std::string getType();
        bool operator==(Ferd& hitt);
        bool operator!=(Ferd& hitt);
        bool operator<(Ferd& hitt);
        bool operator>(Ferd& hitt);
        bool operator<=(Ferd& hitt);
        bool operator>=(Ferd& hitt);
        virtual~Ferd() {}
};
