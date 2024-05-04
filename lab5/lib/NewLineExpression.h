#ifndef NEW_LINE_EXPRESSION_H
#define NEW_LINE_EXPRESSION_H

#include <string>
#include <regex>

#include "Expression.h"
#include "Context.h"

class NewLineExpression : public Expression {
public:
  std::wstring Interpret(Context*);
};

#endif // NEW_LINE_EXPRESSION_H
