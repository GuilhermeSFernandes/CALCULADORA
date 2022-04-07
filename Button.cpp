#include "./Interface/IDigit.hpp"
#include "./Interface/IKeyboard.hpp"
#include "./Interface/IDigit.hpp"
#include "./Interface/IKeyboard.hpp"
#include "./Class/Button.hpp"


  Button::Button(Digit _key){
    this->key = _key;
  };

  void Button::press(){
    this->keyboard->pressKey(this->key);
  };
  void Button::setKeyboard(IKeyboard* keyboard){
      this->keyboard = keyboard;
  }
