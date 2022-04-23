#include <iostream>
#include "Log.h"

void InitLog()
{
  Log("Initialised Log");
}

void Log(const char* message)
{
  std::cout << message << std::endl;
}