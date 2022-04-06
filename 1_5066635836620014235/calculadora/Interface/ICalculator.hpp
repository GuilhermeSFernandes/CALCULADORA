#include "./IButton.hpp"
#include "./ICpu.hpp"
#include "./IDigit.hpp"
#include "./IDisplay.hpp"
#include "./IKeyboard.hpp"

class ICalculator {
  IKeyboard* keyboard;
  IDisplay* display;
  IButton* button;
  ICpu* cpu;
  int MaxDigits;
  virtual void receiveCalc() = 0;
public:

  

};