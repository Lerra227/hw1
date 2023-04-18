#include <iostream>
#include <string>

int
main()
{
  string name; //переменная для хранения имени
  std::cout << "Enter your name:" << std::endl;
  std::cin >> name; //запись в переменную из потока ввода
  std::cout << "Hello world from " << name;
  return 0;
}
