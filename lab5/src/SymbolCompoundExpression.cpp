#include "../lib/SymbolCompoundExpression.h"
#include "../lib/QuoteExpression.h"
#include "../lib/DashExpression.h"

std::wstring SymbolCompoundExpression::Interpret(Context* context) {
  DashExpression dashExpression;
  QuoteExpression quoteExpression;

  dashExpression.Interpret(context);
  quoteExpression.Interpret(context);

  return context->getText();
}
