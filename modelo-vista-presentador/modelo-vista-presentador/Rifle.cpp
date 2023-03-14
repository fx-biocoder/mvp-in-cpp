#include "Rifle.h"
#include <iostream>

void Rifle::shoot()
{
	std::cout << "Púm púm púm!..." << std::endl;
}

void Rifle::setName()
{
	_name = "Rifle";
}

void Rifle::getName()
{
	std::cout << "Weapon: " << _name << std::endl;
}