#pragma once
#include "Item.h"
class Weapon :
	public Item
{
public:
	Weapon();
	virtual ~Weapon();
private:
	int Damage;
	bool TwoHanded;
};

