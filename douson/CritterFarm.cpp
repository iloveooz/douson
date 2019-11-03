#include <iostream>
#include "Critter.h"
#include "CritterFarm.h"

Farm::Farm(int spaces) {
	m_Critters.reserve(spaces);
}

void Farm::Add(const Critter & aCritter) {
	m_Critters.push_back(aCritter);
}

void Farm::RollCall() const {
	for (std::vector<Critter>::const_iterator iter = m_Critters.begin(); iter != m_Critters.end(); ++iter) {
		std::cout << iter->GetName() << " here.\n";
	}
}