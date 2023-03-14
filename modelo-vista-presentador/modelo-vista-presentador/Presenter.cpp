#include "Presenter.h"
#include <iostream>

Presenter::Presenter() {}
Presenter::~Presenter() 
{
	delete soldier;
}

void Presenter::optionMainMenuPickWeapon()
{
	std::cout << "Please choose the weapon you want to use:" << std::endl;
	std::cout << "1- Revolver" << std::endl;
	std::cout << "2- Rifle" << std::endl;
	std::cout << "3- Shotgun" << std::endl;
	std::cout << "X- Go back" << std::endl;
}

void Presenter::optionMainMenuLeaveWeapon()
{
	if (soldier->hasWeapon() == false)
	{
		std::cout << "The soldier is disarmed, he cannot leave a weapon!" << std::endl;
		std::cin.get();
		std::cin.get();
	}
	else
	{
		soldier->leaveWeapon();
		std::cout << "Weapon has been dropped." << std::endl;
		std::cin.get();
		std::cin.get();
	}
}

void Presenter::optionMainMenuShootWeapon()
{
	soldier->shoot();
	std::cin.get();
	std::cin.get();
}

void Presenter::optionMainMenuSeeWeapon()
{
	soldier->seeWeapon();
	std::cin.get();
	std::cin.get();
}

void Presenter::chooseWeaponForSoldier(int option)
{
	soldier->pickWeapon(option);
}

bool Presenter::soldierHasWeapon()
{
	if (soldier->hasWeapon() == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}