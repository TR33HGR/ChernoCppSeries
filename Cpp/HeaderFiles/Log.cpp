#include "Log.h"
#include "Common.h"

#include <iostream>

void InitLog()
{
  Log("Initialise Log");
}

void Log(const char* message)
{
  std::cout << message << std::endl;
}