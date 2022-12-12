// ****************** dateClock Class definition **********************
#include "headerFileDayClock.h"
#include <string>
using namespace std;

class dateClock:public dayClock
{
public:
	dateClock();
	~dateClock();
	dateClock(int , int =0, int =0, string = "Friday", int = 1, int = 1, int = 2000);
	void printTime() const; // overriding function "same name as in dayClock"
	
private:
	int ddate;
	int month;
	int year;
};