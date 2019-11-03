#pragma once
class Critter {
	
public:
	Critter(int hunger = 0, int boredom = 0, const std::string& name = "");
	Critter(const std::string& name = "");
	void Greet();

	int GetHunger() const;
	void SetHunger(int hunger);

	void Talk();
	void Eat(int food = 4);
	void Play(int fun = 4);

	static int GetTotal();

	std::string GetName() const;
	
	static int s_Total;
private:
	int m_Hunger;
	int m_Boredom;
	std::string m_Name;

	int GetMood() const;
	void PassTime(int time = 1);
};