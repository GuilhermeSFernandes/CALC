#include "./IDigit.hpp"
#include "./IKeyboard.hpp"

class IButton {
  Digit key;
  IKeyboard* keyboard;
public:
  virtual void press()=0;
};