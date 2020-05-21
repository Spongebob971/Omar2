

#pragma once

#include <stdio.h>
#include <string>
#include "Person.h"

class Customer : public Person
{
private:


public:
	Customer(int moneyAmount) : Person(moneyAmount)
	{

	}
};

