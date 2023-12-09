// Valdas Kaubrys - FORR3CG - Lokaskil/lokaverkefni
#include <iostream>
#include <string>
#include <sstream>

#include "Ferdlinkedlist.hpp"

using namespace std;

int main() {
    Ferdlinkedlist ferdall;
    // Gögnin sem eiga að vera harðkóðuð
    /*Batsferd(201, 2, 10, false);
    Batsferd(202, 20, 100, true);
    Batsferd(203, 6, 8, false);
    Flugferd(204, 10, 50, "Akureyri");
    Flugferd(205, 120, 200, "Tenerife");
    Flugferd(206, 3, 10, "Grímsey");
    Flugferd(207, 50, 250, "Boston");
    Hjolaferd(208, 3, 10, 4);
    Hjolaferd(209, 0, 20, 10);
    Hjolaferd(210, 3, 5, 1);*/
    // ↓↓↓↓↓ ↓↓↓↓↓ ↓↓↓↓↓ ↓↓↓↓↓ ↓↓↓↓↓ ↓↓↓↓↓
    ferdall.skraBatsferd(201, 2, 10, false);
    ferdall.skraBatsferd(202, 20, 100, true);
    ferdall.skraBatsferd(203, 6, 8, false);
    ferdall.skraFlugferd(204, 10, 50, "Akureyri");
    ferdall.skraFlugferd(205, 120, 200, "Tenerife");
    ferdall.skraFlugferd(206, 3, 10, "Grímsey");
    ferdall.skraFlugferd(207, 50, 250, "Boston");
    ferdall.skraHjolaferd(208, 3, 10, 4);
    ferdall.skraHjolaferd(209, 0, 20, 10);
    ferdall.skraHjolaferd(210, 3, 5, 1);
    string inntak, skipun, tegund, hvert, prentahvad, yfirbyggdurstring;
    int id, fjoldibokad, hamarksfjoldi, lengdklst, skodaid, eydaid, uppfid, nytt_fjbokad;
    bool yfirbyggdur;

    do {
        cout << "Sláðu inn skipun: ";
        getline(cin, inntak);
        stringstream ss;
        ss << inntak;
        ss >> skipun;
        if(skipun == "skrá") {
            ss >> tegund;
            if(tegund == "bátsferð") {
                ss >> id >> fjoldibokad >> hamarksfjoldi >> yfirbyggdur;
                if(fjoldibokad > hamarksfjoldi) {
                    std::cout << "Ekki er hægt að bóka fleirum heldur en hámarksfjöldinn leyfir!" << std::endl;
                } else {
                    ferdall.skraBatsferd(id, fjoldibokad, hamarksfjoldi, yfirbyggdur);
                }
            } else if(tegund == "flugferð") {
                ss >> id >> fjoldibokad >> hamarksfjoldi >> hvert;
                if(fjoldibokad > hamarksfjoldi) {
                    std::cout << "Ekki er hægt að bóka fleirum heldur en hámarksfjöldinn leyfir!" << std::endl;
                } else {
                    ferdall.skraFlugferd(id, fjoldibokad, hamarksfjoldi, hvert);
                }
            } else if(tegund == "hjólaferð"){
                ss >> id >> fjoldibokad >> hamarksfjoldi >> lengdklst;
                if(fjoldibokad > hamarksfjoldi) {
                    std::cout << "Ekki er hægt að bóka fleirum heldur en hámarksfjöldinn leyfir!" << std::endl;
                } else {
                    ferdall.skraHjolaferd(id, fjoldibokad, hamarksfjoldi, lengdklst);
                }
            } else {
                cout << "Skil þig ekki!!" << endl;
            }
        } else if(skipun == "prenta") {
            ss >> prentahvad;
            if(prentahvad == "allt") {
                ferdall.prentaAllt();
            } else if(prentahvad == "bátsferðir"){
                ferdall.prentaAlltBferd();
            } else if(prentahvad == "flugferðir"){
                ferdall.prentaAlltFferd();
            } else if(prentahvad == "hjólaferðir"){
                ferdall.prentaAlltHferd();
            } else {
                cout << "Skil þig ekki!!" << endl;
            }
        } else if(skipun == "skoða") {
            ss >> skodaid;
            ferdall.skodaAkvedinn(skodaid);
        } else if(skipun == "eyða") {
            ss >> eydaid;
            ferdall.eydaAkvednum(eydaid);
        } else if (skipun == "uppffjbókaðra") {
            ss >> uppfid >> nytt_fjbokad;
            ferdall.breytaFjoldibokad(uppfid,nytt_fjbokad);
        } else if(skipun != "hætta") {
            cout << "Skil þig ekki!!!" << endl;
        }
    } while(skipun != "hætta");
    return 0;
}
