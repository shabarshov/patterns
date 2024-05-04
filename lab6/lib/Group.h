#ifndef GROUP_H
#define GROUP_H

#include <string>

class Group {
private:
  std::string name;
  bool performance;

public:
  Group(std::string, bool);

  std::string getName() const;

  bool getPerformance();

  void setPerformance(bool performance);
};

#endif // GROUP_H
