#include <iostream>
#include "Critter.h"

Critter::Critter(int hunger) {
	std::cout << "A new critter has been born!" << std::endl;
	m_Hunger = hunger;
}

void Critter::Greet() {
	std::cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << ".\n";
}

int Critter::GetHunger() const {
	return m_Hunger;
}

void Critter::SetHunger(int hunger) {
	if (hunger < 0) {
		std::cout << "You can't set a critter's hunger to a negative number.\n\n";
	}
	else {
		m_Hunger = hunger;
	}
}