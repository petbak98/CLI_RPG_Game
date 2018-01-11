#pragma once
#include "Living.h"
class Monster :
	public Living
{
public:
	Monster();
	virtual ~Monster();
private:
	int Damage;
	int Defense;
	int Dodge;
};

