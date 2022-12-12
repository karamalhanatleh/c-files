
#include <iostream>
#include "headerFileClockType.h"
using namespace std;

// ******************** Main Function ********************
void main ()
{
	const int size = 5;
	int hour, minute, second;
	cout << "enter the hour, minute and second: \n";
	cin >> hour >> minute >> second;

	clockType myClock[size]; // will call the constructor without paramters
	for (int i = 0; i < size; i++)
	{
		myClock[i].setTime(i, i+1, i+2);
		myClock[i].printTime();
	} // end for -i-
	
	myClock[size-1].setTime(hour, minute, second);
	myClock[size-1].printTime();
	
	// ************** another way of defining objects ****************
	{
		clockType yourClock(hour, minute, second);
		yourClock.printTime();	
		clockType xClock = clockType(hour, minute, second); // equivalent to the previous one
		xClock.printTime();
		// ************** another way of defining objects ****************
		clockType clock[2] = {clockType(4,5,6), clockType(7,8,9)};
		clock[0].printTime();
		clock[1].printTime();
	} // enternal scope: to show how the destructor works!!!
	
	system("pause");
} // end main