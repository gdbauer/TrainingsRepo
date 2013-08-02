#pragma once
#ifndef EINWOHNER_H
#define EINWOHNER_H

#include <string>

class Einwohner {

   std::string name;
   int alter;

public:

   Einwohner(std::string name, int alter);

   const std::string& Name() const { return name; };
   int Alter() const { return alter;  };

};

#endif