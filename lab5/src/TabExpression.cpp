#include "../lib/TabExpression.h"

std::wstring TabExpression::Interpret(Context* context) {
  std::regex regex("\\t");
  return std::regex_replace(context->getText(), regex, "    ");
}
