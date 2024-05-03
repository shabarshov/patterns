#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>

class Context {
private:
  std::wstring text;

public:
  Context();

  Context(std::wstring);

  std::wstring getText();

  void setText(std::wstring);
};

#endif // CONTEXT_H
