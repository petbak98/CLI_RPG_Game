#pragma once
#include "Item.h"
class Armor :
	public Item
//yo m
	
{
public:
	Armor();
	virtual ~Armor();
private:
	int DamageReduction;
};

