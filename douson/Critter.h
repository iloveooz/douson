#pragma once
class Critter {
public:
	Critter(int hunger = 0);
	void Greet();
private:
	int m_Hunger;
};