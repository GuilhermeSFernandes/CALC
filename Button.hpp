#include "../Interface/IDigit.hpp"
#include "../Interface/IKeyboard.hpp"

class Button {
  Digit key;
  IKeyboard* keyboard;
public:
  Button(Digit _key){
    this->key = _key;
  }

  void press();

};