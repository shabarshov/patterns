#ifndef SPACE_EXPRESSION_H
#define SPACE_EXPRESSION_H

#include <string>
#include <algorithm>
#include <regex>

#include "AbstractExpression.h"
#include "Context.h"

class SpaceExpression : public AbstractExpression{
public:
  std::wstring Interpret(Context*);
};

#endif // SPACE_EXPRESSION_H
