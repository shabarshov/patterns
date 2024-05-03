#ifndef ABSTRACT_EXPRESSION_H
#define ABSTRACT_EXPRESSION_H

#include <string>
#include "Context.h"

class AbstractExpression {
public:
  virtual std::wstring Interpret(Context*) = 0;
};

#endif // ABSTRACT_EXPRESSION_H
