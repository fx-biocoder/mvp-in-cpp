#pragma once
#include "Weapon.h"
#include "WeaponFactory.h"

class Soldier
{
private:
	WeaponFactory* factory = new WeaponFactory;
	Weapon* _weapon;

public:
	Soldier() { _weapon = nullptr; }
	~Soldier() { delete _weapon; delete factory; }

	void pickWeapon(int option);
	void leaveWeapon();
	void shoot();
	void seeWeapon();
	bool hasWeapon();
};

