#include "Log.h"

#include <iostream>

int main()
{
  const char* ptr = "Hello";

  if (ptr)
    Log(ptr);
  else if (ptr == "Hello")
    Log("Ptr is Hello!");
  else
    Log("Ptr is null");

  std::cin.get();
}