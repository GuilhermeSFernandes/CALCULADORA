#include "../Interface/IButton.hpp"
#include "../Interface/IFunctionDigit.hpp"
#include "../Interface/IKeyboard.hpp"

class FunctionButton: public IButton {
  FunctionDigit key;
  IKeyboard* keyboard;
public:
  void press(){
    this->keyboard->pressFunctionkey(this-> key);
  };
  void setKeyboard(IKeyboard* keyboard){
        this->keyboard = keyboard;
      }
};