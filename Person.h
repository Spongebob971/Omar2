#pragma once
#include<iostream>
#include<string>

using namespace std;

class Person
{
protected:
	int age;
	string name;
	int moneyAmount;

public:

	Person()
	{
		age = 10;
		name = "Incognito";
	}

	Person(int moneyAmount)
	{
		this->moneyAmount = moneyAmount,
		age = 10;
		name = "Incognito";
	}

	std::string getName();
	void setName(std::string name);
	int getAge();
	void setAge(int name);
	bool canAffordPrice(int price);
};

