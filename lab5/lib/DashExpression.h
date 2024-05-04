#ifndef DASH_EXPRESSION_H
#define DASH_EXPRESSION_H

#include <string>

#include "Expression.h"
#include "Context.h"

class DashExpression : public Expression{
public:
  std::wstring Interpret(Context*);
};

#endif // DASH_EXPRESSION_H
