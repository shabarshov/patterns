#include "../lib/NewLineExpression.h"

std::wstring NewLineExpression::Interpret(Context* context) {
  std::wregex regex(L"\\n+");
  context->setText(std::regex_replace(context->getText(), regex, L"\n"));

  return context->getText();
}
