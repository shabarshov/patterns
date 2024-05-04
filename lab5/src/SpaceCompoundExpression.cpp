#include "../lib/SpaceCompoundExpression.h"

#include "../lib/SpaceExpression.h"
#include "../lib/WhitespaceExpression.h"
#include "../lib/TabExpression.h"

std::wstring SpaceCompoundExpression::Interpret(Context* context) {
  SpaceExpression spaceExpression;
  WhitespaceExpression whitespaceExpression;
  TabExpression tabExpression;

  spaceExpression.Interpret(context);
  whitespaceExpression.Interpret(context);
  tabExpression.Interpret(context);

  return context->getText();
}
