#include <iostream>
#include "Critter.h"
#include "CritterFarm.h"

int Critter::s_Total = 0;

int main() {
	
	Farm myFarm(3);

	Critter crit("Poochie");

	crit.Talk();
	int choice;
	do {
		std::cout << "\nCritter Caretaker\n\n";
		std::cout << "0 - Quit\n";
		std::cout << "1 - Listen to your critter\n";
		std::cout << "2 - Feed your critter\n";
		std::cout << "3 - Play with your critter\n\n";
		std::cout << "Choice: ";
		std::cin >> choice;
		switch (choice)
		{
		case 0:
			std::cout << "Good-bye.\n"; break;
		case 1:
			crit.Talk(); break;
		case 2:
			crit.Eat(); break;
		case 3:
			crit.Play(); break;
		default:
			std::cout << "\nSorry. but "<< choice <<" isn't a valid choice.\n";
		}
	} while (choice != 0);
	
	std::cout << "My critter's name is " << crit.GetName() << std::endl;

	std::cout << "\nAdding three critters to the farm.\n";
	
	myFarm.Add(Critter("Moe"));
	myFarm.Add(Critter("Larry"));
	myFarm.Add(Critter("Curly"));
	
	std::cout << "\nCalling Roll... \n";

	myFarm.RollCall();

	system("pause");
	return 0;
}
