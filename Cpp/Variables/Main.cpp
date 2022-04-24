#include <iostream>

int main()
{
  int variable = 8; // ~ +/-2b
  unsigned int unsigned_variable = 8; // ~ 4b
  std::cout << variable << std::endl;
  variable = 20;
  std::cout << variable << std::endl;
  std::cin.get();
}