#pragma once
#ifndef HAUS_H
#define HAUS_H

#include <vector>
#include "Einwohner.h"

class Haus {

   int anzahlZimmer;
   std::vector<Einwohner*> familie;

public:
    
   Haus(int zimmer) : anzahlZimmer(zimmer) {};

   Haus& EinwohnerZiehtEin (Einwohner* mitglied);
   const std::vector<Einwohner*>& Familie() const { return familie; };

   int getZimmer() const { return anzahlZimmer; };

};

#endif