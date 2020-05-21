#pragma once
#include "Person.h"
#include "WorkStation.h"

class Employee : public Person
{
private:
	WorkStation workStation;

public:

	Employee(int moneyAmount) : Person(moneyAmount)
	{
		workStation = Nowhere;
	}

	WorkStation getWorkStation();
	void setWorkStation(WorkStation workStation);
};

