#include <iostream>
#include "Critter.h"

int main() {
	Critter crit1(9);
	Critter crit2(3);

	crit1.Greet();
	crit2.Greet();
	system("pause");
	return 0;
}
