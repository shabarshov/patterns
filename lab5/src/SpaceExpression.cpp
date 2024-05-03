#include "../lib/SpaceExpression.h"

std::wstring SpaceExpression::Interpret(Context* context) {
  std::wregex regex(L"(\\s)\\(|\\)(\\s)|(\\s),|(\\s)\\.|\\(\\s|\\s\\)");
  context->setText(std::regex_replace(context->getText(), regex, L"$1$2$3$4$5"));

  return context->getText();
}
