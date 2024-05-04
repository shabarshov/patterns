#include <iostream>
#include <string>

#include <io.h>
#include <fcntl.h>
#include <stdio.h>

#include "../lib/Expression.h"
#include "../lib/Context.h"

#include "../lib/NewLineExpression.h"

#include "../lib/SpaceCompoundExpression.h"
#include "../lib/SymbolCompoundExpression.h"

int main() {
  _setmode(_fileno(stdout), _O_U16TEXT); // <= Windows madness
  Context context(L"Text   with   ( multiple ) ,  spaces, \n\nwrong  \n\nline \n\nbreaks, wrong - dashes ,wrong “quotes” and \twrong tabs.");

  Expression* expressions[] = {
    new SymbolCompoundExpression(),
    new SpaceCompoundExpression(),
    new NewLineExpression()
  };

  std::wcout << L"Before:" << std::endl;
  std::wcout << context.getText() << std::endl;

  for (Expression* expression : expressions) {
    expression->Interpret(&context);
  }

  std::wcout << L"\nAfter:" << std::endl;
  std::wcout << context.getText() << std::endl;

  for (Expression* expression : expressions) {
    delete expression;
  }

  return 0;
}
