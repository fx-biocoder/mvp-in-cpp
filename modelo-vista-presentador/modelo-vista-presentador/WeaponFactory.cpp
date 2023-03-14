#include "WeaponFactory.h"
#include "Rifle.h"
#include "Shotgun.h"
#include "Revolver.h"

WeaponFactory::WeaponFactory(){}

WeaponFactory::~WeaponFactory(){}

Weapon* WeaponFactory::createWeapon(int option)
{
	int opt = option;
	switch (opt)
	{
	case 1:
		return new Revolver;
	case 2:
		return new Rifle;
	case 3:
		return new Shotgun;
	default:
		return nullptr;
	}
}