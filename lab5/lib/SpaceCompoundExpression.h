#ifndef SPACE_COMPOUND_EXPRESSION
#define SPACE_COMPOUND_EXPRESSION

#include <string>

#include "Expression.h"
#include "Context.h"

class SpaceCompoundExpression : public Expression {
public:
  std::wstring Interpret(Context*);
};

#endif // SPACE_COMPOUND_EXPRESSION
