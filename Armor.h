#pragma once
#include "Item.h"
class Armor :
	public Item
//yo manergerge
	
{
public:
	Armor();
	virtual ~Armor();
private:
	int DamageReduction;
};

