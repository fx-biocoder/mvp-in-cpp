#include "View.h"
#include <iostream>

View::View()
{
}

View::~View()
{
	delete presenter;
}

void View::showMenu()
{
	std::cout << "-== Welcome to the training field, Soldier! ==-" << std::endl;
	std::cout << "\n";
	std::cout << "What do you want to do?" << std::endl;
	std::cout << "(press the number that corresponds to the desired option)" << std::endl;
	std::cout << "\n";
	std::cout << "1- Pick a weapon" << std::endl;
	std::cout << "2- Leave current weapon" << std::endl;
	std::cout << "3- Shoot" << std::endl;
	std::cout << "4- See current weapon" << std::endl;
	std::cout << "X- Exit" << std::endl;
}

void View::showChooseWeapon()
{
	presenter->optionMainMenuPickWeapon();
}

void View::stringInput(std::string& input)
{
	std::cin >> input;
}

/*
void View::setLanguage()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
}
*/

void View::showText(const char* text)
{
	std::cout << text << std::endl;
}

void View::clearConsole()
{
	system("CLS");
}

// Función para correr el juego
void View::runGame()
{
	setLanguage();

	std::string inputValue;
	bool ExitCondition = false;
	do
	{
		clearConsole();
		std::string* wpnInput = new std::string;

		showMenu();
		stringInput(inputValue);

		// Salir del juego
		if (inputValue == "X" || inputValue == "x")
		{
			ExitCondition = true;
			break;
		}

		// Jugar
		else
		{
			clearConsole();
			// Pick weapon
			if (inputValue == std::to_string(1))
			{
				if (presenter->soldierHasWeapon() == false)
				{
					presenter->optionMainMenuPickWeapon();
					stringInput(*wpnInput);
					clearConsole();

					if (*wpnInput == "X" || *wpnInput == "x")
					{
						continue;
					}
					else
					{
						if (*wpnInput == std::to_string(1))
						{
							presenter->chooseWeaponForSoldier(1);
							continue;
						}
						else if (*wpnInput == std::to_string(2))
						{
							presenter->chooseWeaponForSoldier(2);
							continue;
						}
						else if (*wpnInput == std::to_string(3))
						{
							presenter->chooseWeaponForSoldier(3);
							continue;
						}
						else
						{
							showText("Invalid option, press a key...");
							std::cin.get();
							std::cin.get();
							continue;
						}
					}
				}
				else
				{
					showText("The soldier already has a weapon, he cannot choose another!");
					std::cin.get();
					std::cin.get();
					continue;
				}
			}

			// Leave weapon
			else if (inputValue == std::to_string(2))
			{
				if (presenter->soldierHasWeapon())
				{
					presenter->optionMainMenuLeaveWeapon();
				}
				else
				{
					showText("The soldier cannot leave a weapon, he's disarmed!");
					std::cin.get();
					std::cin.get();
					continue;
				}
				
			}

			// Shoot Weapon
			else if (inputValue == std::to_string(3))
			{
				if (presenter->soldierHasWeapon())
				{
					presenter->optionMainMenuShootWeapon();
				}
				else
				{
					showText("The soldier cannot shoot, he's disarmed!");
					std::cin.get();
					std::cin.get();
					continue;
				}
				
			}

			// See current weapon
			else if (inputValue == std::to_string(4))
			{
				if (presenter->soldierHasWeapon())
				{
					presenter->optionMainMenuSeeWeapon();
				}
				else
				{
					showText("The soldier does not have a weapon!");
					std::cin.get();
					std::cin.get();
					continue;
				}
				
			}

			// Invalid option
			else
			{
				showText("Invalid option, press a key to return to main menu...");
				std::cin.get();
				std::cin.get();
				continue;
			}
		}

		delete wpnInput;
	} while (!ExitCondition);

}