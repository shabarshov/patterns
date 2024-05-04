#include "../lib/SpaceExpression.h"

std::wstring SpaceExpression::Interpret(Context* context) {
  std::wregex regex(L"\\s+");
  context->setText(std::regex_replace(context->getText(), regex, L" "));

  return context->getText();
}
