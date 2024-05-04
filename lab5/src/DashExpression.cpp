#include "../lib/DashExpression.h"

std::wstring DashExpression::Interpret(Context* context) {
  std::wstring text = context->getText();

  for(int i = 0; i < text.length(); i++) {
    if(text[i] != L'-')  continue;
    text[i] = L'—';
  }

  context->setText(text);

  return context->getText();
}
