#include "Revolver.h"
#include <iostream>

void Revolver::shoot()
{
	std::cout << "P�m..." << std::endl;
}

void Revolver::setName()
{
	_name = "Revolver";
}

void Revolver::getName()
{
	std::cout << "Weapon: " << _name << std::endl;
}