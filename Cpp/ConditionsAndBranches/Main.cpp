#include "Log.h"

#include <iostream>

int main()
{
  const char* ptr = nullptr;

  if (ptr)
    Log(ptr);

  std::cin.get();
}