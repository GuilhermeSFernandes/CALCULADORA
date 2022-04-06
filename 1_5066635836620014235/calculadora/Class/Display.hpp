#include "../Interface/IDigit.hpp"
#include <iostream>
using std::string;

#include "../Interface/IDisplay.hpp"

class Display: public IDisplay{
  int maxDigits;
  string digits;
public:
  void show(){};
  void append();
  void remove();
  void clear();
};