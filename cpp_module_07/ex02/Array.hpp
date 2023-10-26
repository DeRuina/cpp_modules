#ifndef ARRAY_H
#define ARRAY_H


template <typename T>
class Array
{
  private:
      int arrSize;
      T *arr;

  public:
      Array();
      Array(unsigned int n);
      Array(const Array &copy);
      Array &operator=(const Array &src);
      ~Array();

      T &operator[](int index);
      int size();
};

#include "Array.tpp"

#endif