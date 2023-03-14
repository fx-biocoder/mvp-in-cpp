#include "Soldier.h"
#include <iostream>

void Soldier::pickWeapon(int option)
{
	_weapon = factory->createWeapon(option);
}

void Soldier::seeWeapon()
{

	_weapon->getName();
}

void Soldier::shoot()
{
	_weapon->shoot();
}

void Soldier::leaveWeapon()
{
	_weapon = nullptr;
}

bool Soldier::hasWeapon()
{
	if (_weapon == nullptr)
	{
		return false;
	}
	else return true;
}