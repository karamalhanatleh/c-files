// ****************** dayClock Class definition **********************
#ifndef headerFileDayClock_h
#define headerFileDayClock_h

#include "headerFileClockType.h"
#include <string>
using namespace std;

class dayClock:public clockType
{
public:
	dayClock();
	~dayClock();
	dayClock(int, int, int, string);
	void printTime() const; // overriding function "same name as in clockType"
private:
	string day;
};
#endif