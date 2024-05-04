#include "../lib/WhitespaceExpression.h"

std::wstring WhitespaceExpression::Interpret(Context* context) {
  std::wstring text = context->getText();

  // Добавляем пробелы после точек и запятых
  std::wregex regex_add_space_after_punctuation(L"([.,])([^\\s])");
  text = std::regex_replace(text, regex_add_space_after_punctuation, L"$1 $2");

  // Добавляем пробелы после закрывающей скобки
  std::wregex regex_add_space_after_closing_parenthesis(L"\\)([^\\s])");
  text = std::regex_replace(text, regex_add_space_after_closing_parenthesis, L") $1");

  // Удаляем лишние пробелы перед точками и запятыми
  std::wregex regex_remove_space_before_punctuation(L"\\s+([.,])");
  text = std::regex_replace(text, regex_remove_space_before_punctuation, L"$1");

  // Удаляем лишние пробелы после открывающей скобки
  std::wregex regex_remove_space_after_opening_parenthesis(L"\\(\\s+");
  text = std::regex_replace(text, regex_remove_space_after_opening_parenthesis, L"(");

  // Удаляем лишние пробелы перед закрывающей скобкой
  std::wregex regex_remove_space_before_closing_parenthesis(L"\\s+\\)");
  text = std::regex_replace(text, regex_remove_space_before_closing_parenthesis, L")");

  // Удаляем лишние пробелы после точек, запятых и закрывающих скобок
  std::wregex regex_remove_extra_space(L"(\\s{2,})");
  text = std::regex_replace(text, regex_remove_extra_space, L" ");

  context->setText(text);

  return context->getText();
}
