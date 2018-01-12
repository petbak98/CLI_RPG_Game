#pragma once
#include "Item.h"
class Armor :
	public Item

	
{
public:
	Armor();
	virtual ~Armor();
private:
	int DamageReduction;
};

