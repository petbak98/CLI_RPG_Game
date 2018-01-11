#pragma once
#include "Living.h"
class Hero :
	public Living
{
public:
	Hero();
	virtual ~Hero();
private:
	int magicPower; //mana
	int strength;
	int dexterity;
	int agility;
	int money;
	int experience;
};

