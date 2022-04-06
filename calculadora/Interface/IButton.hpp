
#include "./IKeyboard.hpp"

class IButton {
  IKeyboard* keyboard;
public:
  virtual void press()=0;
};