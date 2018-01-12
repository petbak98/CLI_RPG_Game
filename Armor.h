#pragma once
#include "Item.h"
class Armor :
	public Item
//yo mefgedr
	
{
public:
	Armor();
	virtual ~Armor();
private:
	int DamageReduction;
};

