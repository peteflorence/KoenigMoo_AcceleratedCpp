// ask for a person's name, and generate a framed greeting
#include <iostream>
#include <string>

int main() 
{
  { std::string s = "a string";
  { std::string x = s + ", really";
  std::cout << x << std::endl; }
  std::cout << s << std::endl;
  }
  return 0;
}