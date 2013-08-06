#pragma once
#ifndef MITARBEITER_H
#define MITARBEITER_H

#include <string>

using namespace std;

class Mitarbeiter {

   string name;
   int alter;
   float gehalt;

public:

   Mitarbeiter(string name, int alter, float gehalt) : name(name), alter(alter), gehalt(gehalt) {};

   string Name() const { return name; };
   int Alter() const { return alter; };
   float Gehalt() const { return gehalt; };

};

#endif