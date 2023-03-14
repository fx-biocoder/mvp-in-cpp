#pragma once
#include<string>
class Weapon
{
protected:
	std::string _name;
public:
	Weapon() {}
	virtual ~Weapon() {}
	virtual void shoot();
	virtual void setName();
	virtual void getName();
};