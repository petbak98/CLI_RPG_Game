#pragma once
#include "Item.h"
class Armor :
	public Item
//yo
	
{
public:
	Armor();
	virtual ~Armor();
private:
	int DamageReduction;
};

