#include "../Interface/ICalculator.hpp"
#include "../Interface/IButton.hpp"
#include "../Interface/ICpu.hpp"
#include "../Interface/IDisplay.hpp"
#include "../Interface/IKeyboard.hpp"
#include "../Interface/IDigit.hpp"
#include "../Interface/IFunctionDigit.hpp"

class _Calculator: public ICalculator {
  protected:
    IButton* buttons;
    IKeyboard* keyboard;
    IDisplay* display;
    ICpu* cpu;
    int MaxDigits;
    virtual void receiveCalc() = 0; 

    double memoria1[];
    double memoria2[];
    int currentMemoria;
  

  //para fazer as funções abaixo, ver: 
  // https://stackoverflow.com/questions/261963/how-can-i-iterate-over-an-enum
  IButton* generateButtons();//gera os botoes de 0 a 9(IDigit)
  IButton* generateFunctionButtons();//gera os botoes de função(IFunctionDigit)
public:
  _Calculator(
    IKeyboard* _keyboard,
    IDisplay* _display,
    ICpu* _cpu
  );//isso aqui vai no Calculator.cpp
  // {
  //   this->keyboard = _keyboard;
  //   this->display = _display;
  //   this->cpu = _cpu;
  //   this->buttons = generateButtons();
  // }

//essa função vai receber o digito e salvar no thid->memoria
  void ReceiveDigit(Digit);

  //fazer uma função que converte os enums em numeros e depois envia para
  //a cpu calcular,
};