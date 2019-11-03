#include <iostream>
#include "Critter.h"

Critter::Critter(int hunger) {
	std::cout << "A new critter has been born!" << std::endl;
	m_Hunger = hunger;
}

void Critter::Greet() {
	std::cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << ".\n";
}
