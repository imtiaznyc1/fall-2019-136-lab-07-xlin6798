#include <iostream>
#include <cctype>
#include "funcs.h"
#include <fstream>
#include <cstdlib>
#include <climits>

std::string fixFormat(std::string str)
{
  std::ifstream fin(str);
  if (fin.fail()){
    std::cerr << "File cannot be opened for reading." << '\n';  //output error if file not found or cannot be opened
    exit(1);
  }
  std::string name = "";
  int indent = 0;
  int temp = 0;
  std::string ret;
  std::string retLine = "";
  while (std::getline(fin, name))
  {
    if (name != "")
    {
      name = removeLeadingSpaces(name);
      ret = "";
      if (countChar (name, '}') > countChar (name, '{'))
        indent -= countChar (name, '}') + countChar (name, '{');
      else if (countChar (name, '}') == countChar (name, '{') && name.find('{') > name.find('}'))
          indent -= countChar (name, '}');
      temp = indent;
      while (temp > 0)
      {
        ret += '\t';
        temp --;
      }
      if (countChar (name, '}') < countChar (name, '{') || (name.find('{') > name.find('}') && countChar (name, '}') == countChar (name, '{')))
      {
          indent = indent + countChar (name, '{');
          if (countChar (name, '}') < countChar (name, '{'))
            indent -= countChar (name, '}');
      }
      retLine += ret + name + '\n';
    }
    else
      retLine += '\n';
  }
  return retLine;
}

std::string removeLeadingSpaces(std::string line)
{
  int i = 0;
  while (isspace(line.at(i)) && i < line.size() - 1)
  {
    i++;
  }
  return line.substr(i, line.size() - i);
}

int countChar(std::string line, char c)
{
  /*
  int start = 0;
  int end = 0;

  for(char i: line){
    if(i == '/')
      start++;
      break;

    start++;
  }

  end = start;
  for(int i = start+1; i<line.length(); i++){
    if(line[i] == '/'){
      end++;
      break;
    }
  }

  for(int i = start; i<=end; i++){
    if(line[i] == '}' || line[i] == '{'){
      return 0;
    }
  }
  */

  int count = 0;
  for (auto cc : line)
  {
    if (cc == c)
      count ++;
  }
  return count;
}
