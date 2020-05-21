// Zoo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ZooArea.h"
#include "Donkey.h"
#include "Tiger.h"
#include "Customer.h"

int ZooArea::price = 100;

using namespace std;

int main()
{
	ZooArea* zooArea = new ZooArea();
	Donkey* donkey = new Donkey();
	Tiger* tiger = new Tiger();

	donkey->setName("Karlos");

	donkey->makeSound();
	tiger->makeSound();

	zooArea->addAnimal(donkey);
	zooArea->addAnimal(tiger);

	cout << endl;
	zooArea->listAnimals();

	Customer* customerWithLowMoney = new Customer(80);
	Customer* customer1 = new Customer(1000);
	Customer* customer2 = new Customer(1000);
	Customer* customer3 = new Customer(1000);
	Customer* customer4 = new Customer(1000);
	Customer* customer5 = new Customer(1000);
	Customer* customer6 = new Customer(1000);
	Employee* employee1 = new Employee(10);
	Employee* employee2 = new Employee(20);

	zooArea->hireEmployee(employee1);

	customerWithLowMoney->setName("Karel Gott");
	customer1->setName("John Wick");
	customer2->setName("Rey Koranteng");
	customer3->setName("Donald Duck");
	customer4->setName("David Attenborough");
	customer5->setName("Donald Trump");

	zooArea->sellTicket(customerWithLowMoney);
	zooArea->sellTicket(customer1);
	zooArea->sellTicket(customer2);
	zooArea->sellTicket(customer3);
	//zooArea->sellTicket(customer4);
	//zooArea->sellTicket(customer5);
	//zooArea->sellTicket(customer6);

	zooArea->sellTicket(employee1);

	system("pause");
}