#include "Log.h"

#include <iostream>

int main()
{
  int x = 6;

  if (x == 5)
    Log("Hello World!");

  std::cin.get();
}