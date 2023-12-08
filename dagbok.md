# Dagbók
---
## Dagsetning: 12/7/2023   
### Ferd.hpp
  - **Skilgreining á Class:**
    - Smíðaður flokkur `Ferd` til að stjórna upplýsingum um ferðir með einkavirkjum: `id`, `fjoldibokad`, og `hamarksfjoldi`.
  
  - **Smiðir:**
    - `Ferd::Ferd()` - Sjálfgefinn smiður sem byrjar með sjálfgefnum gildum fyrir breyturnar.
    - `Ferd::Ferd(int id, int fjoldibokad, int hamarksfjoldi)` - Skilgreindur smiður sem stillir sérstök gildi.
  
  - **Aðgangs- og Stillingarföll:**
    - `getId()`, `setId(int nytt_id)` - Aðgangs- og stillingaraðferðir fyrir `id`.
    - `getFjoldibokad()`, `setFjoldibokad(int nyr_fjoldibokad)` - Aðgangs- og stillingaraðferðir fyrir `fjoldibokad`.
    - `getHamarksfjoldi()`, `setHamarksfjoldi(int nyr_hamarksfjoldi)` - Aðgangs- og stillingaraðferðir fyrir `hamarksfjoldi`.
  
  - **Prenta Fall:**
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
  - **Skilgreining á Class:**
    - `Batsferd` flokkur búinn til sem erfir frá `Ferd` til að stjórna bátsferðaupplýsingum með aukabreytunni `yfirbyggdur`.
  
  - **Smiðir:**
    - `Batsferd::Batsferd()` - Sjálfgefinn smiður sem byrjar með sjálfgefnum gildum fyrir breytuna `yfirbyggdur`.
    - `Batsferd::Batsferd(int id, int fjoldibokad, int hamarksfjoldi, bool yfirbyggdur)` - Skilgreindur smiður sem stillir gildi með sérstökum hætti.
  
  - **Aðgangs- og Stillingarföll:**
    - `getYfirbyggdur()`, `setYfirbyggdur(bool nytt_boolvalue)` - Aðgangs- og stillingaraðferðir fyrir `yfirbyggdur`.
  
  - **Prenta Fall:**
    - `Batsferd::prenta()` - Aðferð sem sýnir bátsferðarupplýsingar með `std::cout`.

### Batsferd.cpp
  - **Smiðir:**
    - `Batsferd::Batsferd()` - Sjálfgefinn smiður sem byrjar með sjálfgefnum gildum fyrir `yfirbyggdur`.
    - `Batsferd::Batsferd(int id, int fjoldibokad, int hamarksfjoldi, bool yfirbyggdur)` - Skilgreindur smiður sem stillir gildi með sérstökum hætti, með kalli á `Ferd` smið.
  
  - **Aðgangs- og Stillingarfall:**
    - `getYfirbyggdur()`, `setYfirbyggdur(bool nytt_boolvalue)` - Aðgangs- og stillingaraðferðir fyrir `yfirbyggdur`.
  
  - **Prenta Föll:**
    - `Batsferd::prenta()` - Aðferð sem sýnir bátsferðarupplýsingar með `std::cout`, þar sem `ID`, `fjoldibokad`, `hamarksfjoldi` og `yfirbyggdur` eru birtar.

### Flugferd.hpp
  - **Skilgreining á Class:**
    - `Flugferd` flokkur búinn til sem erfir frá `Ferd` til að stjórna flugferðaupplýsingum með aukabreytunni `hvert`.
  
  - **Smiðir:**
    - `Flugferd::Flugferd()` - Sjálfgefinn smiður sem byrjar með sjálfgefnum gildum fyrir `hvert`.
    - `Flugferd::Flugferd(int id, int fjoldibokad, int hamarksfjoldi, std::string hvert)` - Skilgreindur smiður sem stillir gildi með sérstökum hætti.
  
  - **Aðgangs- og Stillingarföll:**
    - `getHvert()`, `setHvert(std::string nytt_hvert)` - Aðgangs- og stillingaraðferðir fyrir `hvert`.
  
  - **Prenta Fall:**
    - `Flugferd::prenta()` - Aðferð sem sýnir flugferðarupplýsingar með `std::cout`.

### Flugferd.cpp
  - **Smiðir:**
    - `Flugferd::Flugferd()` - Sjálfgefinn smiður sem byrjar með tómt gildi fyrir `hvert`.
    - `Flugferd::Flugferd(int id, int fjoldibokad, int hamarksfjoldi, std::string hvert)` - Skilgreindur smiður sem stillir gildi með sérstökum hætti, með kalli á `Ferd` smið.
  
  - **Aðgangs- og Stillingarföll:**
    - `getHvert()`, `setHvert(std::string nytt_hvert)` - Aðgangs- og stillingaraðferðir fyrir `hvert`.
  
  - **Prenta Fall:**
    - `Flugferd::prenta()` - Aðferð sem sýnir flugferðarupplýsingar með `std::cout`, birtir `ID`, `fjoldibokad`, `hamarksfjoldi` og `hvert`.
  
  Þessi skrá skráir virkni hvers og eins aðgerðar í `Flugferd` klössnum, sem stjórnar flugferðaupplýsingum og hefur sérstaka aðferð til að birta þær.

### Hjolaferd.hpp
  - **Classaskilgreining:**
    - `Hjolaferd` flokkur búinn til sem erfir frá `Ferd` til að stjórna upplýsingum um hjólaferðir með aukabreytunni `lengdklst`.
  
  - **Smiðir:**
    - `Hjolaferd::Hjolaferd()` - Sjálfgefinn smiður sem byrjar með tómu gildi fyrir `lengdklst`.
    - `Hjolaferd::Hjolaferd(int id, int fjoldibokad, int hamarksfjoldi, int lengdklst)` - Skilgreindur smiður sem stillir gildi með sérstökum hætti.
  
  - **Aðgangs- og Stillingarföll:**
    - `getLengdklst()`, `setLengdklst(int nytt_lengdklst)` - Aðgangs- og stillingaraðferðir fyrir `lengdklst`.
  
  - **Prenta fall:**
    - `Hjolaferd::prenta()` - Aðferð sem sýnir upplýsingar um hjólaferð með `std::cout`.
  
  Hér er lýsing á hlutverki og virkni hverrar aðgerðar í `Hjolaferd` flokknum, sem stýrir upplýsingum um hjólaferðir og hefur sérstaka aðferð til að aðgang að `lengdklst`.

### Hjolaferd.cpp
  - **Smiðir:**
    - `Hjolaferd::Hjolaferd()` - Sjálfgefinn smiður sem byrjar með gildið 0 fyrir `lengdklst`.
    - `Hjolaferd::Hjolaferd(int id, int fjoldibokad, int hamarksfjoldi, int lengdklst)` - Skilgreindur smiður sem stillir gildi með sérstökum hætti, með erfi á `Ferd` smið.
  
  - **Aðgangs- og Stillingarfall:**
    - `getLengdklst()`, `setLengdklst(int nytt_lengdklst)` - Aðgangs- og stillingaraðferðir fyrir `lengdklst`.
  
  - **Prenta Fall:**
    - `Hjolaferd::prenta()` - Aðferð sem sýnir upplýsingar um hjólaferð með `std::cout`, sýnir `ID`, `fjoldibokad`, `hamarksfjoldi` og `lengdklst`.
  
  Þessi skrá skráir virkni hvers og eins aðgerðar í `Hjolaferd` klössnum sem stýrir upplýsingum um hjólaferðir og hefur sérstaka aðferð til að aðgang að `lengdklst`.

---
## Dagsetning: 12/8/2023  
- bý til main.cpp file í möppunni Kodinn lokaskil
- Uploadaði skjölin sem voru í möppuni hlutaskil, líka í möppuna lokaskil
- Bjó til filein: FerdNode.hpp, Ferdlinkedlist.hpp, Ferdlinkedlist.cpp

### FerdNode.hpp  
- **Safnaskilgreining:**
  - `FerdNode` safn búið til til að halda utan um `Ferd` hluti og tengingar milli þeirra.

- **Gagnatakmark:**
  - `ferdin` - Pointer á `Ferd` hlut sem er geymdur í hverjum hnúti.
  - `next` - Pointer á næsta hnút í safninu.

- **Smiður:**
  - `FerdNode::FerdNode(Ferd* ferdin)` - Skilgreindur smiður sem stillir gildi fyrir `ferdin` og `next`.

- **Afvirkni Smiður:**
  - `FerdNode::~FerdNode()` - Smiður sem eyðir `ferdin` hlutnum sem tengist þessum hnút í minni.

### Ferdlinkedlist.hpp  
- **Klösuskilgreining:**
  - `Ferdlinkedlist` klösin búið til til að stjórna tengdum listum af mismunandi ferðum (`Batsferd`, `Flugferd`, `Hjolaferd`) í safninu.

- **Gagnataka:**
  - `head` - Bendir á fyrsta hnútinn í tengda lista.

- **Aðgerðir:**
  - `Ferdlinkedlist::Ferdlinkedlist()` - Sjálfgefinn smiður sem byrjar með tómum lista.
  - `skraRadad(Ferd* ferdin)` - Aðferð til að skrá ferð í lista raðað.
  - `skraBatsferd(int id, int fjoldibokad, int hamarksfjoldi, bool yfirbyggdur)` - Aðferð til að skrá nýja bátsferð í lista.
  - `skraFlugferd(int id, int fjoldibokad, int hamarksfjoldi, std::string hvert)` - Aðferð til að skrá nýja flugferð í lista.
  - `skraHjolaferd(int id, int fjoldibokad, int hamarksfjoldi, int lengdklst)` - Aðferð til að skrá nýja hjólaferð í lista.
  - `prentaAllt()` - Aðferð til að prenta allar ferðir í listanum.
  - `breytaFjoldibokad(int id, int nytt_fjoldibokad)` - Aðferð til að breyta fjölda bókaða farþega í tiltekinni ferð.
  - `eydaAkvednum(int id)` - Aðferð til að eyða tiltekina ferð út úr listanum.
  - `skodaAkvedinn(int id)` - Aðferð til að skoða akveðinna ferð.
  - `~Ferdlinkedlist()` - Aðferð til að eyða öllum hnútum í listanum þegar klósin er eytt.

### Ferdlinkedlist.cpp
- **Klósuskilgreiningar:**
  - `Ferdlinkedlist` klósin er skilgreindur til að stjórna tengdum lista af ferðum, notaður til að bóka flugferðir, hjólaferðir og bátsferðir.

- **Aðgerðir:**
  - `Ferdlinkedlist::Ferdlinkedlist()` - Sjálfgefinn smiður sem byrjar lista með engum hnút.
  - `skraRadad(Ferd* ferdin)` - Aðferð til að skrá ferðir í röð eftir hámarksfjölda ferða sem bókast.
  - `skraBatsferd(int id, int fjoldibokad, int hamarksfjoldi, bool yfirbyggdur)` - Skráir nýja bátsferð í listann.
  - `skraFlugferd(int id, int fjoldibokad, int hamarksfjoldi, std::string hvert)` - Skráir nýja flugferð í listann.
  - `skraHjolaferd(int id, int fjoldibokad, int hamarksfjoldi, int lengdklst)` - Skráir nýja hjólaferð í listann.
  - `prentaAllt()` - Prentar allar ferðirnar í lista.
  - `breytaFjoldibokad(int id, int nytt_fjoldibokad)` - Breytir fjölda bókaðra farþega í ákveðinni ferð.
  - `eydaAkvednum(int id)` - Eyðir tiltekinni ferð úr listanum.
  - `skodaAkvedinn(int id)` - Skoðar og prentar ákveðna ferð ef hún er í listanum.
  - `~Ferdlinkedlist()` - Eyðir öllum hnútum í listanum og sér um minniseyðingu þegar klósin er eytt.
