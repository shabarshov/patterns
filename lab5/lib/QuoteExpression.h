#ifndef QUOTE_EXPRESSION_H
#define QUOTE_EXPRESSION_H

#include <string>
#include <algorithm>

#include "AbstractExpression.h"
#include "Context.h"

class QuoteExpression : public AbstractExpression{
public:
  std::wstring Interpret(Context*);
};

#endif // QUOTE_EXPRESSION_H
