#include "Log.h"

#include <iostream>

int main()
{
  const char* ptr = "Hello";

  if (ptr)
    Log(ptr);

  std::cin.get();
}