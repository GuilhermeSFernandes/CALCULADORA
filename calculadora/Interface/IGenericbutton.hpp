#include "./IFunctionDigit.hpp"
#include "./IKeyboard.hpp"
#include "./IDigit.hpp"

class GenericButton {
public:
  virtual void press()=0;
};