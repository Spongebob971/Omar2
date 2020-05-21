#include "ZooArea.h"

void ZooArea::hireEmployee(Employee* employee)
{
	employee->setWorkStation(Zoo);
}

void ZooArea::addAnimal(Animal* animal)
{
	animals.push_back(animal);
}

void ZooArea::listAnimals()
{
	std::cout << "We got " << animals.size() << " animals." << std::endl;

	for (auto& animal : animals) // access by reference to avoid copying
	{
		std::cout << "name: " << animal->getName() << std::endl;
	}

	std::cout << std::endl;
}

void ZooArea::sellTicket(Customer* customer)
{
	if (!customer->canAffordPrice(price) || peopleCounter <= 0) {
		std::cout << "get the hell out of here Mr: " << customer->getName() << std::endl << std::endl;
	}
	else {
		std::cout << "Welcome Mr: " << customer->getName() << std::endl;

		peopleCounter--;

		std::cout << "available space: " << peopleCounter << std::endl << std::endl;
	}
}

void ZooArea::sellTicket(Employee* employee)
{
	if (peopleCounter <= 0) {
		std::cout << "Sorry, we are full, try it next time." << std::endl;

		return ;
	}

	if (employee->getWorkStation() == Zoo) {

		std::cout << "U are employee, U do not have to pay, welcome my friend!" << std::endl;

		peopleCounter--;

		std::cout << "available space: " << peopleCounter << std::endl << std::endl;

		return;
	}

	if (!employee->canAffordPrice(price)) {
		std::cout << "get the hell out of here Mr: " << employee->getName() << std::endl << std::endl;
	}
	else {
		std::cout << "Welcome Mr: " << employee->getName() << std::endl;

		peopleCounter--;

		std::cout << "available space: " << peopleCounter << std::endl << std::endl;
	}
}
