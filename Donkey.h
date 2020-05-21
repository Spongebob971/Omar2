#pragma once

#include"Animal.h";
#include <iostream>

class Donkey : public Animal
{
private: 
	std::string name;

public:

	Donkey()
	{
		name = "NoName";
	}

	std::string getName();

	// Inherited via Animal
	void setName(std::string name) override;
	void makeSound();
};

