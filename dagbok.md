# Dagbók
---
## **Dagsetning: 12/7/2023**  
### Ferd.hpp
  - **Skilgreining á Flokki:**
    - Smíðaður flokkur `Ferd` til að stjórna upplýsingum um ferðir með einkavirkjum: `id`, `fjoldibokad`, og `hamarksfjoldi`.
  
  - **Smiðir:**
    - `Ferd::Ferd()` - Sjálfgefinn smiður sem byrjar með sjálfgefnum gildum fyrir breyturnar.
    - `Ferd::Ferd(int id, int fjoldibokad, int hamarksfjoldi)` - Skilgreindur smiður sem stillir sérstök gildi.
  
  - **Aðgangs- og Stillingaraðferðir:**
    - `getId()`, `setId(int nytt_id)` - Aðgangs- og stillingaraðferðir fyrir `id`.
    - `getFjoldibokad()`, `setFjoldibokad(int nyr_fjoldibokad)` - Aðgangs- og stillingaraðferðir fyrir `fjoldibokad`.
    - `getHamarksfjoldi()`, `setHamarksfjoldi(int nyr_hamarksfjoldi)` - Aðgangs- og stillingaraðferðir fyrir `hamarksfjoldi`.
  
  - **Prenta Aðferð:**
    - `Ferd::prenta()` - Virtual aðferð sem sýnir upplýsingar um ferð með `std::cout`.
  
  - **Yfirhlaðning á Samanburðarvirkjum:**
    - `operator==`, `operator!=`, `operator<`, `operator>`, `operator<=`, `operator>=` - Skilgreindir til að bera saman `Ferd` hluti eftir ID og     hámarksfjölda.
  - **Destructor**
    - `virtual~Ferd() {}`

### Ferd.cpp
  - Bjó til `Ferd` class til að halda utan um ferðarupplýsingar.
  - Notaði breytur: `id`, `fjoldibokad`, og `hamarksfjoldi` fyrir auðkenni ferðar, bókaða farþega og hámarksfjölda.
  - Að búa til objectið föllin:
    - `Ferd::Ferd()` - Byrjunargildi fyrir `id`, `fjoldibokad`, og `hamarksfjoldi`.
    - `Ferd::Ferd(int id, int fjoldibokad, int hamarksfjoldi)` - Stillir gildi með skilyrði til að hindra ofbókun.
  - Aðgangs- og stillingarföll:
    - `getId()`, `setId(int nytt_id)` - Sækja og breyta `id`.
    - `getFjoldibokad()`, `setFjoldibokad(int nyr_fjoldibokad)` - Sækja og breyta `fjoldibokad` með takmörkun til að hindra ofbókun.
    - `getHamarksfjoldi()`, `setHamarksfjoldi(int nyr_hamarksfjoldi)` - Sækja og breyta `hamarksfjoldi`.
  - Prenta fallið:
    - `Ferd::prenta()` - Sýnir ferðarupplýsingar (`id`, `fjoldibokad`, `hamarksfjoldi`) með `std::cout`.
  - Samanburðarvirkjar:
    - `operator==`, `operator!=`, `operator<`, `operator>`, `operator<=`, `operator>=` - Gerir samanburð á ferðum eftir `id` og `hamarksfjoldi`.
  - Takmörkunareglur:
    - Gildi eru athugað í smiði og `setFjoldibokad()` aðgerð til að tryggja að bókaðir farþegar fara ekki yfir hámarksfjölda.

### Batsferd.hpp
  - **Skilgreining á Flokki:**
    - `Batsferd` flokkur búinn til sem erfir frá `Ferd` til að stjórna bátsferðaupplýsingum með aukabreytunni `yfirbyggdur`.
  
  - **Smiðir:**
    - `Batsferd::Batsferd()` - Sjálfgefinn smiður sem byrjar með sjálfgefnum gildum fyrir breytuna `yfirbyggdur`.
    - `Batsferd::Batsferd(int id, int fjoldibokad, int hamarksfjoldi, bool yfirbyggdur)` - Skilgreindur smiður sem stillir gildi með sérstökum hætti.
  
  - **Aðgangs- og Stillingaraðferðir:**
    - `getYfirbyggdur()`, `setYfirbyggdur(bool nytt_boolvalue)` - Aðgangs- og stillingaraðferðir fyrir `yfirbyggdur`.
  
  - **Prenta Aðferð:**
    - `Batsferd::prenta()` - Aðferð sem sýnir bátsferðarupplýsingar með `std::cout`.

### Batsferd.cpp
  - **Smiðir:**
    - `Batsferd::Batsferd()` - Sjálfgefinn smiður sem byrjar með sjálfgefnum gildum fyrir `yfirbyggdur`.
    - `Batsferd::Batsferd(int id, int fjoldibokad, int hamarksfjoldi, bool yfirbyggdur)` - Skilgreindur smiður sem stillir gildi með sérstökum hætti, með kalli á `Ferd` smið.
  
  - **Aðgangs- og Stillingaraðferðir:**
    - `getYfirbyggdur()`, `setYfirbyggdur(bool nytt_boolvalue)` - Aðgangs- og stillingaraðferðir fyrir `yfirbyggdur`.
  
  - **Prenta Aðferð:**
    - `Batsferd::prenta()` - Aðferð sem sýnir bátsferðarupplýsingar með `std::cout`, þar sem `ID`, `fjoldibokad`, `hamarksfjoldi` og `yfirbyggdur` eru birtar.

### Flugferd.hpp
  - **Skilgreining á Flokki:**
    - `Flugferd` flokkur búinn til sem erfir frá `Ferd` til að stjórna flugferðaupplýsingum með aukabreytunni `hvert`.
  
  - **Smiðir:**
    - `Flugferd::Flugferd()` - Sjálfgefinn smiður sem byrjar með sjálfgefnum gildum fyrir `hvert`.
    - `Flugferd::Flugferd(int id, int fjoldibokad, int hamarksfjoldi, std::string hvert)` - Skilgreindur smiður sem stillir gildi með sérstökum hætti.
  
  - **Aðgangs- og Stillingaraðferðir:**
    - `getHvert()`, `setHvert(std::string nytt_hvert)` - Aðgangs- og stillingaraðferðir fyrir `hvert`.
  
  - **Prenta Aðferð:**
    - `Flugferd::prenta()` - Aðferð sem sýnir flugferðarupplýsingar með `std::cout`.
