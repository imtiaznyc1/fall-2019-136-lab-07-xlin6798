#include <iostream>
#include <cctype>
#include "funcs.h"

std::string removeLeadingSpaces(std::string line) 
{
  int i = 0;
  while (isspace(line.at(i)))
  {
    i++;
  }
  return line.substr(i, line.size() - i);
}

int countChar(std::string line, char c)
{
  int count = 0;
  for (auto cc : line)
  {
    if (cc == c)
      count ++;
  }
  return count;
}
