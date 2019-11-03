#pragma once
class Critter {
public:
	Critter(int hunger = 0);
	void Greet();

	int GetHunger() const;
	void SetHunger(int hunger);

	static int GetTotal();
	static int s_Total;
private:
	int m_Hunger;
};