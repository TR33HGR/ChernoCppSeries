#include <iostream>

int Multiply(int a, int b)
{
  return a * b;
}

int main()
{
  int result = Multiply(3, 2);
  std::cout << result << std::endl;

  int result2 = Multiply(4, 2);
  std::cout << result << std::endl;

  int result3 = Multiply(3, 45);
  std::cout << result << std::endl;
  std::cin.get();
}