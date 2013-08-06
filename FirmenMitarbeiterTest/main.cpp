#include "Firma.h"
#include "Kunde.h"
#include "Mitarbeiter.h"

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
   Firma denoGata("DenoGata", 10); 

   Mitarbeiter* dirk = new Mitarbeiter("Dirk", 21, 650);
   Mitarbeiter* kevin = new Mitarbeiter("Kevin", 21, 750);
   Mitarbeiter* dennism = new Mitarbeiter("Dennis M.", 20, 750);
   Mitarbeiter* dennisl = new Mitarbeiter("Dennis L.", 25, 2000);

   denoGata
      .mitarbeiterEinstellen(dirk)
      .mitarbeiterEinstellen(kevin)
      .mitarbeiterEinstellen(dennism)
      .mitarbeiterEinstellen(dennisl);

   denoGata.setUmsatz(12000);

   auto mitarbeiter = denoGata.mitArbeiterListe();

   cout << "Firmenname: " << denoGata.firmenName() << endl;
   cout << "Umsatz: " << denoGata.getUmsatz() << endl;
   
   for_each(mitarbeiter.begin(), mitarbeiter.end(), [&] (Mitarbeiter* currentMitarbeiter) {
      cout << 
         currentMitarbeiter->Name()       << 
         " ist "                          <<
         currentMitarbeiter->Alter()      <<
         " Jahre alt und verdient: "      <<
         currentMitarbeiter->Gehalt()     <<
         " im Monat"                      <<
         endl;
   } );

   return 0;
}