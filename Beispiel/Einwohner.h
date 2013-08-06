#pragma once
#ifndef EINWOHNER_H
#define EINWOHNER_H

#include <string>

using namespace std;

class Einwohner {

   string name;
   int alter;

public:

   Einwohner(string name, int alter);

   const string& Name() const { return name; };
   int Alter() const { return alter;  };

};

#endif