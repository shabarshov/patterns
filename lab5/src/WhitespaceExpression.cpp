#include "../lib/WhitespaceExpression.h"

std::wstring WhitespaceExpression::Interpret(Context* context) {
  std::wregex regex(L"\\s+");
  context->setText(std::regex_replace(context->getText(), regex, L" "));

  return context->getText();
}
