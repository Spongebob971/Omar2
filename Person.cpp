#include "Person.h"

std::string Person::getName()
{
	return name;
}

void Person::setName(std::string newName)
{
	name = newName;
}

int Person::getAge()
{
	return age;
}

void Person::setAge(int newAge)
{
	age = newAge;
}

bool Person::canAffordPrice(int price)
{
	bool result = moneyAmount > price ? true : false;
	return result;
}