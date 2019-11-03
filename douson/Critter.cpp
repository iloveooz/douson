#include <iostream>
#include "Critter.h"

Critter::Critter(int hunger, int boredom) {
	std::cout << "A new critter has been born!" << std::endl;
	m_Hunger = hunger;
	m_Boredom = boredom;
	++s_Total;
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

int Critter::GetTotal() {
	return s_Total;
}

int Critter::GetMood() const {
	return (m_Hunger + m_Boredom);
}

void Critter::PassTime(int time) {
	m_Hunger += time;
	m_Boredom += time;
}

void Critter::Talk() {
	std::cout << "I'm à critter and I feel";
	
	int mood = GetMood();
	
	if (mood > 15) {
		std::cout << " mad.\n";
	}
	else if (mood > 10) {
		std::cout << " frustrated. \n";
	}
	else if (mood > 5) {
		std::cout << " okay. \n";
	}
	else {
		std::cout << " happy.\n";
	}
	PassTime();
}

void Critter::Eat(int food) {
	std::cout << "Brruppp.\n";
	m_Hunger -= food;
	if (m_Hunger < 0) {
		m_Hunger = 0;
	}
	PassTime();
}

void Critter::Play(int fun) {
	std::cout << "Wheee!\n";
	m_Boredom -= fun;
	if (m_Boredom < 0)
	{
		m_Boredom = 0;
	}
	PassTime();
}