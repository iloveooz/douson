#pragma once
#include <vector>
#include "Critter.h"

class Farm {

public:
	Farm(int spaces = 1);
	void Add(const Critter& aCritter);
	void RollCall() const;
private:
	std::vector<Critter> m_Critters;
};
