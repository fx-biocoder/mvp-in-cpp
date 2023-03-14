#pragma once
#include "Weapon.h"
class Revolver : public Weapon
{
public:
	Revolver() : Weapon() { this->setName(); }
	~Revolver() {}
	void shoot() override;
	void setName() override;
	void getName() override;
};