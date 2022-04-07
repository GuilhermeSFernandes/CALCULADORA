#include "./Interface/IDigit.hpp"
#include "./Interface/IFunctionDigit.hpp"
#include "./Interface/ICalculator.hpp"
#include "./Class/Keyboard.hpp"

class Keyboard:  public Keyboard{
    ICalculator * Calculator;
    IKeyboard * keyboard;

    double convertToNumber(Digit key){
        int i = key;
        printf("tesste: %d\n\n",i);
    };

public:

  void pressKey(Digit key){

  };
  void pressFunctionkey(FunctionDigit key);
};