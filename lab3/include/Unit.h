#include <map>

#pragma once

class Unit {
protected:
	int weight;

public:
	virtual int GetWeight() = 0;

	virtual	void AddUnit(Unit* unit);
	
	virtual void Info();
};
