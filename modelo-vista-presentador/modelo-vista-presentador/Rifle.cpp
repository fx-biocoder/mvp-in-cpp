#include "Rifle.h"
#include <iostream>

void Rifle::shoot()
{
	std::cout << "P�m p�m p�m!..." << std::endl;
}

void Rifle::setName()
{
	_name = "Rifle";
}

void Rifle::getName()
{
	std::cout << "Weapon: " << _name << std::endl;
}