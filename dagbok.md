# Dagbók
---
## **Dagsetning: 12/7/2023**  
  --- **Ferd.hpp**
    - Bjó til Ferd.hpp
    - Bjó til breytur: int id, int fjoldibokad, int hamarksfjoldi. fyrir clasann.
    - Bjó til klasann Ferd
    - bó til setter og getter fyrir hverja breytu.
    - Bjó til Ferd(); og Ferd( með innihaldi );
    - Bjó til fallið virtual void prenta();
    - Bjó til operator overload
    - Bjó til virtual~Ferd() destructor

  --- **Ferd.cpp**
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
