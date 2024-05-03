#include "../lib/Context.h"

Context::Context() {
  this->text = L"";
}

Context::Context(std::wstring text) {
  this->text = text;
}

std::wstring Context::getText() {
  return this->text;
}

void Context::setText(std::wstring text) {
  this->text = text;
}
