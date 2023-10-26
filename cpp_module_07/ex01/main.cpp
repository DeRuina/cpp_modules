#include "iter.hpp"

int main(void)
{

  int arr[] = {1, 4, 7, 12312};
  char str[] = "EL EL ISRAEL";
  bool boolArr[] = {true, true, false};

  iter(arr, 4, printValue);
  iter(str, 12, printValue);
  iter(boolArr, 3, printValue);

  return (0);
}