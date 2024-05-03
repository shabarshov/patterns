#include "../lib/DashExpression.h"

std::wstring DashExpression::Interpret(Context* context) {
  context->setText(replace(context->getText().begin(), context->getText().end(), L"-", L"—"));
  return context->getText();
}
