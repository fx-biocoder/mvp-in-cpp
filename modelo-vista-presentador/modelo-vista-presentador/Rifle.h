#pragma once
#include "Weapon.h"
class Rifle : public Weapon
{
public:
	Rifle() : Weapon() { this->setName(); }
	~Rifle() {}
	void shoot() override;
	void setName() override;
	void getName() override;
};