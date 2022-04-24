#include <iostream>
#include "Log.h"
#include "Common.h"

void InitLog()
{
  Log("Initialise Log");
}

void Log(const char* message)
{
  std::cout << message << std::endl;
}