// ask for a person's name, and generate a framed greeting
#include <iostream>
#include <string>

int main() 
{

  const std::string exclam = "!";

  const std::string message = "Hello, world" + exclam;

  std::cout << exclam << std::endl;
  std::cout << message << std::endl;
  return 0;

}