#include "Shotgun.h"
#include <iostream>

void Shotgun::shoot()
{
	std::cout << "бPссс!..." << std::endl;
}

void Shotgun::setName()
{
	_name = "Shotgun";
}

void Shotgun::getName()
{
	std::cout << "Weapon: " << _name << std::endl;
}