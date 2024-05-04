#ifndef SYMBOL_COMPOUND_EXPRESSION
#define SYMBOL_COMPOUND_EXPRESSION

#include <string>

#include "Expression.h"
#include "Context.h"

class SymbolCompoundExpression : public Expression {
public:
  std::wstring Interpret(Context*);
};

#endif // SYMBOL_COMPOUND_EXPRESSION
