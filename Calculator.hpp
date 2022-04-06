#include "../Interface/ICalculator.hpp"
#include "../Interface/IButton.hpp"
#include "../Interface/ICpu.hpp"
#include "../Interface/IDigit.hpp"
#include "../Interface/IDisplay.hpp"
#include "../Interface/IKeyboard.hpp"

class Calculator: public ICalculator {
  double result;

  IButton* buttons;
  IKeyboard* keyboard;
  IDisplay* display;
  ICpu* cpu;

  IButton* generateButtons();
public:
  Calculator(
    IKeyboard* _keyboard,
    IDisplay* _display,
    ICpu* _cpu
  );
  // {
  //   this->keyboard = _keyboard;
  //   this->display = _display;
  //   this->cpu = _cpu;
  //   this->buttons = generateButtons();
  // }

};