#ifndef QUOTE_EXPRESSION_H
#define QUOTE_EXPRESSION_H

#include <string>

#include "Expression.h"
#include "Context.h"

class QuoteExpression : public Expression{
public:
  std::wstring Interpret(Context*);
};

#endif // QUOTE_EXPRESSION_H
