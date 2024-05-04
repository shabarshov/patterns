#include "../lib/QuoteExpression.h"

std::wstring QuoteExpression::Interpret(Context* context) {
  std::wstring text = context->getText();

  for(int i = 0; i < text.length(); i++) {
    if(text[i] == L'\u201C') {
      text[i] = L'\u00AB';
      continue;
    }
    if(text[i] == L'\u201D') {
      text[i] = L'\u00BB';
    }
  }

  context->setText(text);

  return context->getText();
}