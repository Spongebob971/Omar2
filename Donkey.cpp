#include "Donkey.h"

std::string Donkey::getName()
{
	return name;
}

void Donkey::setName(std::string name)
{
	this->name = name;
}

void Donkey::makeSound()
{
	std::cout << "The Donkey makes sound: iiiiihaaaaa" << std::endl;
}
