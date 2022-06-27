
#include "fibonacci.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  std::string s(argv[1]);
  unsigned int N = std::stoi(s);
  long long x = fibonacci(N);
  std::cout << "The " << N << "th Fibonacci number is: " << x << std::endl;
  return 0;
}
