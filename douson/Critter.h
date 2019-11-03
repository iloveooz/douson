#pragma once
class Critter {
public:
	Critter(int hunger = 0);
	void Greet();

	int GetHunger() const;
	void SetHunger(int hunger);
	
private:
	int m_Hunger;
};