#pragma once
#include "IView.h"
#include "Presenter.h"

// Idiomas
#include <locale.h>

// Comandos de símbolo del sistema
#include <windows.h>

class Presenter;

class View : public IView
{
private:
	Presenter* presenter = new Presenter;
public:
	View();
	~View();
	void showMenu() override;
	void showChooseWeapon() override;
	void stringInput(std::string& input) override;
	// void setLanguage() override;
	void clearConsole() override;
	void showText(const char* text) override;
	void runGame();
};

