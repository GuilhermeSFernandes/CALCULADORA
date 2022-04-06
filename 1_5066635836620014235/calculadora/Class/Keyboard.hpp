#include "../Interface/IDigit.hpp"
#include "../Interface/IFunctionDigit.hpp"
#include "../Interface/IButton.hpp"
#include "../Interface/IKeyboard.hpp"
#include "../Interface/ICalculator.hpp"

class Keyboard: public IKeyboard {
  ICalculator * Calculator;
  IKeyboard * keyboard;
public:
  void pressKey(Digit key);
  void pressFunctionkey(FunctionDigit key);
};