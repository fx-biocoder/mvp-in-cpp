#pragma once
#include "Weapon.h"

class WeaponFactory
{
public:
	WeaponFactory();
	~WeaponFactory();
	Weapon* createWeapon(int option);
};

