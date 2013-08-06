#pragma once
#ifndef FIRMA_H
#define FIRMA_H

#include <string>
#include <vector>

#include "Mitarbeiter.h"

using namespace std;

class Firma {

   string nameFirma;
   int mitarbeiter;
   float umsatz;
   vector<Mitarbeiter*> firma;

public:
   
   Firma(string nameFirma, int mitarbeiter) : nameFirma(nameFirma), mitarbeiter(mitarbeiter) {};

   Firma& mitarbeiterEinstellen (Mitarbeiter* mitarbeiter);
   Firma& mitarbeiterFeuern (Mitarbeiter* mitarbeiter);
   string firmenName() const { return nameFirma; };
   const vector<Mitarbeiter*>& mitArbeiterListe() const { return firma; };

   void setUmsatz (float umsatzAngegeben) { umsatz = umsatzAngegeben;};
   float getUmsatz () { return umsatz; };

};

#endif