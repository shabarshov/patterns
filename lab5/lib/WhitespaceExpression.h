#ifndef WHITESPACE_EXPRESSION_H
#define WHITESPACE_EXPRESSION_H

#include <string>
#include <algorithm>
#include <regex>

#include "AbstractExpression.h"
#include "Context.h"

class WhitespaceExpression : public AbstractExpression {
public:
  std::wstring Interpret(Context*);
};

#endif // WHITESPACE_EXPRESSION_H
