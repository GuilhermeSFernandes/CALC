#include "../Interface/IButton.hpp"
#include "../Interface/IFunctionDigit.hpp"
#include "../Interface/IKeyboard.hpp"

class FunctionButton: public IButton {
  FunctionDigit key;
  IKeyboard* keyboard;
public:
  void press();
};