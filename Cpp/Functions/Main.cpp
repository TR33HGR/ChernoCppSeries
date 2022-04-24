#include <iostream>

int Multiply(int a, int b)
{

}

void MultiplyAndLog(int a, int b)
{
  int result = Multiply(a, b);
  std::cout << result << std::endl;
}

int main()
{
  MultiplyAndLog(3, 2);
  MultiplyAndLog(4, 2);
  MultiplyAndLog(3, 45);
  std::cin.get();
}