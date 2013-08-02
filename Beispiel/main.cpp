#include "Haus.h"
#include "Einwohner.h"

#include <iostream>
#include <algorithm>

int main() {

   Haus genodata(5);

   Einwohner* dirk = new Einwohner("Dirk", 21);
   Einwohner* dennis =  new Einwohner("Dennis", 20);
   Einwohner* kevin = new Einwohner("Kevin", 21);

   genodata
      .EinwohnerZiehtEin(dirk)
      .EinwohnerZiehtEin(dennis)
      .EinwohnerZiehtEin(kevin);

   auto fam = genodata.Familie();

   std::for_each(fam.begin(), fam.end(), [&] (Einwohner* mitglied) {
      std::cout << mitglied->Name() << " ist " << mitglied->Alter() << " Jahre alt." << std::endl;
   });

   return 0;
}
