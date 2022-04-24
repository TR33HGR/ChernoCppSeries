#include "Log.h"

#include <iostream>

int main()
{
  int x = 6;

  if (x)
    Log("Hello World!");

  std::cin.get();
}