#ifndef TAB_EXPRESSION_H
#define TAB_EXPRESSION_H

#include <string>
#include <regex>

#include "Expression.h"
#include "Context.h"

class TabExpression : public Expression {
public:
  std::wstring Interpret(Context*);
};

#endif // TAB_EXPRESSION_H
