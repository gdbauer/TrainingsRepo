#include "Einwohner.h"

Einwohner::Einwohner(std::string name, int alter) : name(name), alter(alter) {
   if (alter < 0) throw std::exception();




};