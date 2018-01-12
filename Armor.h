#pragma once
#include "Item.h"
class Armor :
	public Item
//yo man
	
{
public:
	Armor();
	virtual ~Armor();
private:
	int DamageReduction;
};

