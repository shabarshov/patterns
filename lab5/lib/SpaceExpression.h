#ifndef SPACE_EXPRESSION_H
#define SPACE_EXPRESSION_H

#include <string>
#include <regex>

#include "Expression.h"
#include "Context.h"

class SpaceExpression : public Expression{
public:
  std::wstring Interpret(Context*);
};

#endif // SPACE_EXPRESSION_H
