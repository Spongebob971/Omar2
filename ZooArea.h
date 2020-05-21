#pragma once
#include<vector>
#include <iostream>
#include "Animal.h"
#include "Customer.h"
#include "Employee.h"

class ZooArea
{
private:
	std::vector<Animal*> animals;
	int peopleCounter;

public:
	static int price;

	ZooArea()
	{
		peopleCounter = 5;
	}

	void hireEmployee(Employee* employee);
	void addAnimal(Animal* animal);
	void listAnimals();
	void sellTicket(Customer* customer);
	void sellTicket(Employee* employee);
};

