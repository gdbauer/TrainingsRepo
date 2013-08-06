#include "Firma.h"

#include <algorithm>

Firma& Firma::mitarbeiterEinstellen (Mitarbeiter* mitarbeiter)
{
   firma.push_back(mitarbeiter);

   return *this;
}

Firma& Firma::mitarbeiterFeuern (Mitarbeiter* mitarbeiter)
{
   std::remove(firma.begin(), firma.end(), mitarbeiter);

   return *this;
}