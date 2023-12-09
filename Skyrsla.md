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

- **Keyrsla á forriti (`12/9/2023`):**
  - Forritið heldur áfram að þróa sig, bætir við fleiri aðgerðum til að vinna með mismunandi tegundir ferða og tengsl við notendur í gegnum skipunarglugga-viðmót. 
  
Markmiðið með þessu verkefni er að búa til forrit sem getur stjórnað mismunandi gerðum ferða, tryggt að það geti bætt við, eytt, breytt og sýnt upplýsingar um ferðir.
[Hlekkur á dagbókarskrá.](https://github.com/valdaska21/FORR3CG-Haust-2023---Lokaverkefni---Valdas/blob/main/dagbok.md)  

--- 
### Ef einhverjar kröfur voru ekki leystar þá þarf það að koma fram: 
Allt var leyst sýnist mér.

### Leiðbeiningar fyrir viðmót

Hér eiga að koma leiðbeiningar um hvernig á að nota forritið.

### Myndband

Í myndbandinu á að sýna helstu eiginleika forritsins.

- Skrá/sækja/eyða/uppfæra ferð.
- Prenta ferð/ferðir.

[Hlekkur á myndband sem sýnir virkni forritsins]()
