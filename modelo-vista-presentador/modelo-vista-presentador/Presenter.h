#pragma once
#include "Soldier.h"
#include <string>

class Presenter
{
private:
	Soldier* soldier = new Soldier;

public:
	Presenter();
	~Presenter();

	// View - Main Menu
	void optionMainMenuPickWeapon();
	void optionMainMenuLeaveWeapon();
	void optionMainMenuShootWeapon();
	void optionMainMenuSeeWeapon();

	// Weapons
	void chooseWeaponForSoldier(int option);

	// Other getters
	bool soldierHasWeapon();
};