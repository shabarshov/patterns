#ifndef DASH_EXPRESSION_H
#define DASH_EXPRESSION_H

#include <string>
#include <algorithm>

#include "AbstractExpression.h"
#include "Context.h"

class DashExpression : public AbstractExpression{
public:
  std::wstring Interpret(Context*);
};

#endif // DASH_EXPRESSION_H
