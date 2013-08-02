#include "Haus.h"

Haus& Haus::EinwohnerZiehtEin (Einwohner* mitglied) 
{
   familie.push_back(mitglied);

   return *this;
}