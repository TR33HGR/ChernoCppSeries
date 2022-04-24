#include "Log.h"

#include <stdlib.h>
#include <iostream>

int main()
{
  InitLog();
  Log("Hello World!");
  std::cin.get();
}
