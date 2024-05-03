#ifndef NEW_LINE_EXPRESSION_H
#define NEW_LINE_EXPRESSION_H

#include <string>
#include <algorithm>
#include <regex>

#include "AbstractExpression.h"
#include "Context.h"

class NewLineExpression : public AbstractExpression {
// private:
//   std::regex regex("\\n+");

public:
  std::wstring Interpret(Context*);
};

#endif // NEW_LINE_EXPRESSION_H
