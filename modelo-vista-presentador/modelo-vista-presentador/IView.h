#pragma once
#include <string>
class IView
{
public:
	IView();
	virtual ~IView();
	virtual void showMenu();
	virtual void showChooseWeapon();
	virtual void stringInput(std::string& input);
	// virtual void setLanguage();
	virtual void clearConsole();
	virtual void showText(const char* text);
};

