#pragma once
#include "Weapon.h"
class Shotgun : public Weapon
{
public:
	Shotgun() : Weapon() { this->setName(); }
	~Shotgun() {}
	void shoot() override;
	void setName() override;
	void getName() override;
};