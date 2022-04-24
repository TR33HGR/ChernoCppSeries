#include "Log.h"

#include <iostream>

int main()
{
  int x = 6;
  bool comparisionResult = x == 5;
  if (comparisionResult)
  {
    Log("Hello World!");
  }
  std::cin.get();
}