#include "../Interface/IDigit.hpp"
#include "../Interface/IKeyboard.hpp"
#include "../Interface/IDigit.hpp"
#include "../Interface/IKeyboard.hpp"
#include "../Interface/IGenericButton.hpp"

class Button: public GenericButton{
    Digit key;
    IKeyboard* keyboard;
public:
  Button(Digit _key);

  void press();
  void setKeyboard(IKeyboard* keyboard);
};