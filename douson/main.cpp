#include <iostream>
#include "Critter.h"

int Critter::s_Total = 0;

int main() {
	Critter crit1(9);
	Critter crit2(3);

	crit1.Greet();
	crit2.Greet();

	std::cout << "Calling GetHunger(): " << crit1.GetHunger() << "\n\n";
	
	std::cout << "Calling SetHunger() with -1.\n";
	crit1.SetHunger(-1);
	
	std::cout << "Calling SetHunger() with 9.\n";
	crit1.SetHunger(9);
	
	std::cout << "Calling GetHunger(): " << crit1.GetHunger() << "\n\n";

	std::cout << "Critter::GetTotal = " << Critter::GetTotal() << '\n';
	
	system("pause");
	return 0;
}
