#pragma once
#include <string>
#include <iostream>
class Animal
{
private:

public:
	virtual std::string getName() = 0;
	virtual void setName(std::string name) = 0;
	void makeSound();
};

