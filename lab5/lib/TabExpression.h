#ifndef TAB_EXPRESSION_H
#define TAB_EXPRESSION_H

#include <string>
#include <algorithm>
#include <regex>

#include "AbstractExpression.h"
#include "Context.h"

class TabExpression : public AbstractExpression{
// private:
//   std::regex regex("\\t");

public:
  std::wstring Interpret(Context*);
};

#endif // TAB_EXPRESSION_H
