#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main()
{
  std::cout << "enter file name or file path: \n";
  std::string fileName;
  std::cin >> fileName;
  std::cout << fixFormat(fileName);;
}