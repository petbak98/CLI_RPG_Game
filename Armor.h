#pragma once
#include "Item.h"
class Armor :
	public Item

	//hello there
{
public:
	Armor();
	virtual ~Armor();
private:
	int DamageReduction;
};

