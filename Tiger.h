#pragma once

#include "Animal.h"


class Tiger : public Animal
{
private:
	std::string name;

public:

	Tiger()
	{
		name = "NoName";
	}
	std::string getName() override;
	void setName(std::string name) override;
};

