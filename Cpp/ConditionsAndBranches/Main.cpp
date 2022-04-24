#include "Log.h"

#include <iostream>

int main()
{
  const char* ptr = nullptr;

  if (ptr)
    Log(ptr);
  else
    Log("Ptr is null");

  std::cin.get();
}