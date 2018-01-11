#include <string>

using namespace std;

class Spell
{
public:
	Spell();
	virtual ~Spell();
private:
	string name;
	int Price;
	int MinLevel;
	int DamageRange;
	int MinMana;
};

