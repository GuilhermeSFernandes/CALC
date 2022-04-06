#include "../Interface/ICpu.hpp"
#include "../Interface/IDigit.hpp"
#include "../Interface/IFunctionDigit.hpp"

class IKeyboard {
public:
  void pressKey(Digit key);
  void pressFunctionkey(FunctionDigit key);
};