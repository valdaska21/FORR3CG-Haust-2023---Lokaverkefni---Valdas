# Skýrsla á: FORR3CG - H23 - Lokaverkefni
### Samantekt á dagbók.
Þessi dagbóksskrá lýsir þróun ferðaforrits sem stýrir mismunandi tegundum ferða með notkun á klasum eins og `Ferd`, `Batsferd`, `Flugferd`, `Hjolaferd` o.fl.

**Stutt samantekt:**

- **Skilgreiningar á flokkum (`Ferd.hpp`, `Batsferd.hpp`, `Flugferd.hpp`, `Hjolaferd.hpp`):**
  - Hver flokkur skilgreinir sérstakar gerðir ferða (`Batsferd` fyrir bátsferðir, `Flugferd` fyrir flugferðir, `Hjolaferd` fyrir hjólaferðir).
  - Smiðir og föll eru skilgreindar til að vinna með upplýsingar um ferðir, t.d. auðkenni, bókaða og hámarksfjölda.

- **Útfærsla á flokkum (`Ferd.cpp`, `Batsferd.cpp`, `Flugferd.cpp`, `Hjolaferd.cpp`):**
  - Útfærslur á smiðum, aðgangsaðferðum, breytingaraðferðum, prenta-aðferðum, samanburðarvirkjum og takmörkunum eru veittar.
  - Þessar skrár sér um að vinna með virkni og smáatriði hvers og eins tegundar ferða.

- **Höfuðforrit (`main.cpp`):**
  - Forritið býr til tilvik af klösunni `Ferdlinkedlist` til að stjórna mismunandi tegundum ferða.
  - Það tengist notendum með viðmót sem líkist skipunarglugga, sem leyfir aðgerðir eins og bæta við, prenta, breyta eða eyða ferðum.

- **Ferdlinkedlist (`Ferdlinkedlist.hpp`, `Ferdlinkedlist.cpp`):**
  - Stjórnar tengdum listum af mismunandi tegundum ferða (`Batsferd`, `Flugferd`, `Hjolaferd`) með aðferðum eins og `skraBatsferd`, `skraFlugferd`, og `skraHjolaferd`.
  - Veitir aðferðir til að breyta, birta eða eyða tilteknum ferðum eða öllum ferðum.

- **Skrárbúningur (`12/8/2023`):**
  - Nýjar skrár voru búnar til, þar á meðal `main.cpp`, í möppunni `Kodinn lokaskil`.
  - Hlaðið var upp viðbótarskrám (`FerdNode.hpp`, `Ferdlinkedlist.hpp`, `Ferdlinkedlist.cpp`) í sömu möppu.

- **Breytingar í kóða (`Batsferd.cpp`, `FerdNode.hpp`):**
  - Bætt var við aðgerðum til að sýna upplýsingar um ferðir út frá ákveðnum skilyrðum og takmörkunum.

- **búin til main.cpp og keyrsla á forriti (`12/9/2023`):**
  - Forritið heldur áfram að þróa sig, bætir við fleiri aðgerðum til að vinna með mismunandi tegundir ferða og tengsl við notendur í gegnum skipunarglugga-viðmót. 
  
Markmiðið með þessu verkefni er að búa til forrit sem getur stjórnað mismunandi gerðum ferða, tryggt að það geti bætt við, eytt, breytt og sýnt upplýsingar um ferðir.
[Hlekkur á dagbókarskrá.](https://github.com/valdaska21/FORR3CG-Haust-2023---Lokaverkefni---Valdas/blob/main/dagbok.md)  

--- 
### Ef einhverjar kröfur voru ekki leystar þá þarf það að koma fram: 
- Committaði kannski ekki nógu þétt kóðanna í github.

### Leiðbeiningar fyrir viðmót
- **Til að skrá nýja ferð:**
   - Sláðu inn "skrá" ásamt tegund ferðarinnar: "bátsferð", "flugferð" eða "hjólaferð".
   - Fylgdu því með upplýsingum eins og ID, fjölda bókaðra farþega, hámarksfjölda, og aukaupplýsingum eftir tegund (yfirbyggður fyrir bátferðir, áfangastaður fyrir flugferðir, lengd hjólferðar o.s.frv.).
   - - `<skrá> <bátsferð/flugferð/hjólaferð> <"ID"> <"Fjölda bókaðra farðega"> <"hámarksfjölda"> <"bool Yfirbyggður: 1 eða 0/Áfangastaður: "texti"/lengdklst: "tala"">`

- **Til að prenta upplýsingar:**
   - Notaðu "prenta" og tilgreindu hvaða gerð af ferðum þú vilt prenta: "allt", "bátsferðir", "flugferðir", eða "hjólaferðir".
   -  - `<prenta> <allt/bátsferðir/flugferðir/hjólaferðir>` 

- **Til að skoða ákveðna ferð:**
   - Sláðu inn "skoða" fylgt með ID á ferðinni sem þú vilt skoða nánar.
   -  - `<skoða> <"ID">`

- **Til að eyða ferð:**
   - Þegar þú vilt eyða ferð, notaðu "eyða" og gefðu ID þeirrar ferðar sem þú vilt fjarlægja úr listanum.
   -  - `<eyða> <"ID">`

- **Til að breyta fjölda bókaðra farþega:**
   - Notaðu "uppffjbókaðra" og gefðu ID ferðarinnar sem þú vilt breyta, ásamt nýjum fjölda bókaðra farþega.
   -  - `<uppffjbókaðra> <"ID"> <"nýr fjöldi bókaðra farþega">`

- **Hætta keyrir forritið út:**
   - Sláðu inn "hætta" til að ljúka forritinu.
   -  - `<hætta>`

### Myndband
[Hlekkur á myndband sem sýnir virkni forritsins](https://github.com/valdaska21/FORR3CG-Haust-2023---Lokaverkefni---Valdas/blob/main/Myndband_a_notkun_forritsins_10mb.mp4)
