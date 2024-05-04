#ifndef WHITESPACE_EXPRESSION_H
#define WHITESPACE_EXPRESSION_H

#include <string>
#include <regex>

#include "Expression.h"
#include "Context.h"

class WhitespaceExpression : public Expression {
public:
  std::wstring Interpret(Context*);
};

#endif // WHITESPACE_EXPRESSION_H
