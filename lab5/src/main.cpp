#include <iostream>
#include <string>

#include "../lib/Context.h"
// #include "../lib/DashExpression.h"
#include "../lib/NewLineExpression.h"
#include "../lib/QuoteExpression.h"
#include "../lib/SpaceExpression.h"
// #include "../lib/TabExpression.h"
#include "../lib/WhitespaceExpression.h"

int main() {
  Context context(L"Text   with   \u201Cmultiple\u201D  \n\n\n\nspaces, wrong dashes -, wrong quotes \"\",\twrong tabs and wrong   line   breaks.");

  // DashExpression dashExpression;
  NewLineExpression newLineExpression;
  QuoteExpression quoteExpression;
  SpaceExpression spaceExpression;
  // TabExpression tabExpression;
  WhitespaceExpression whitespaceExpression;

  std::cout << "Before:" << std::endl;
  std::wcout << context.getText() << std::endl;

  // dashExpression.Interpret(&context);
  newLineExpression.Interpret(&context);
  quoteExpression.Interpret(&context);
  spaceExpression.Interpret(&context);
  // context.setText(tabExpression.Interpret(&context));
  whitespaceExpression.Interpret(&context);

  std::cout << "After:" << std::endl;
  std::wcout << context.getText() << std::endl;

  return 0;
}

