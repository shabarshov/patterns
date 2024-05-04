#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>

#include "Context.h"

class Expression {
public:
  virtual std::wstring Interpret(Context*) = 0;
};

#endif // EXPRESSION_H
