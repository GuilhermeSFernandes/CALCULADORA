#include "./ICpu.hpp"
#include "./IDigit.hpp"
#include "./IFunctionDigit.hpp"
class IKeyboard {
public:
  virtual void pressKey(Digit key)=0;
  virtual void pressFunctionkey(FunctionDigit key)=0;
};