#include <string>
using namespace std;

class Living
{
public:
	Living();
	virtual ~Living();
private:
	string name;
	int Level;
	int HealthPower; //the actual Health
};

