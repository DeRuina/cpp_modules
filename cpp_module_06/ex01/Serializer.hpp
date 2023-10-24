#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <iostream>
#include <stdint.h>



struct Data
{
  int num;
};


class Serializer
{
  private:
      Serializer();
      Serializer(const Serializer &copy);
      Serializer &operator=(const Serializer &src);
      ~Serializer();

  public:
      static uintptr_t serialize(Data* ptr);
      static Data* deserialize(uintptr_t raw);

};

#endif