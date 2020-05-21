#include "Employee.h"

WorkStation Employee::getWorkStation()
{
	return this->workStation;
}

void Employee::setWorkStation(WorkStation workStation)
{
	this->workStation = workStation;
}
