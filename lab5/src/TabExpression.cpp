#include "../lib/TabExpression.h"

std::wstring TabExpression::Interpret(Context* context) {
  std::wregex regex(L"\\t");
  return std::regex_replace(context->getText(), regex, L"    ");
}
