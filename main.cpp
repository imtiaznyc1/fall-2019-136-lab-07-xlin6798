#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main()
{
  std::string name;
  int indent = 0;
  int temp;
  std::string ret;
  while (std::getline(std::cin, name))
  {
    name = removeLeadingSpaces(name);
    ret = "";
    indent -= countChar (name, '}');
    temp = indent;
    while (temp > 0)
    {
      ret += '\t';
      temp --;
    }
    indent += countChar (name, '{');
    std::cout << ret + name + '\n';
  }
}