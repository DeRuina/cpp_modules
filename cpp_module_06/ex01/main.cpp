#include "Serializer.hpp"

int main(void)
{
  Data num;
  num.num = 27;
  uintptr_t serialize = Serializer::serialize(&num);
  std::cout << &serialize << " Serialized" <<std::endl;
  Data *deserialize = Serializer::deserialize(serialize);
  std::cout << deserialize->num << " Deserialized" << std::endl;
  return (0);
}