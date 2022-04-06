#include "./IDigit.hpp"
#include <iostream>
using std::string;


class IDisplay{
  int maxDigits;
  string digits;
public:
  virtual void show()=0;
  virtual void append()=0;
  virtual void remove()=0;
  virtual void clear()=0;
};