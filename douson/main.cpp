#include <iostream>
#include "Critter.h"

int Critter::s_Total = 0;

int main() {
	Critter crit;
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
	
	system("pause");
	return 0;
}
