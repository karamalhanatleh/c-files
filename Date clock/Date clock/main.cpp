#include <iostream>
#include <string>
#include "headerFileClockType.h"
#include "headerFileDayClock.h"
#include "headerFileDateClock.h"
using namespace std;

// ******************** Main Function ********************
void main ()
{
	string day;
	int hour, minute, second;
	int ddate, month, year;
	cout << "enter the hour, minute, second and day: \n";
	cin >> hour >> minute >> second >> day;
	cout << "enter the day, month and year: \n";
	cin >> ddate >> month >> year;

	// *********** clockType objects ***********
	clockType myClock;
	cout << "clockType object -myClock- ";
	myClock.printTime();
	// enternal scope: to show how the destructor works !!
	{
		clockType yourClock(hour, minute, second);
		cout << "clockType object -yourClock- ";
		yourClock.printTime();
	} // end enternal scope

	// *********** dayClock objects ***********
	dayClock Xclock;
	cout << "dayClock object -Xclock- ";
	Xclock.printTime();
	// enternal scope: to show how the destructor works !!
	{
		dayClock Yclock(hour, minute, second, day);
		cout << "dayClock object -Yclock- ";
		Yclock.printTime();
	} // end enternal scope

	// *********** dateClock objects ***********
	dateClock clock1;
	cout << "dateClock object -clock1- ";
	clock1.printTime();
	// enternal scope: to show how the destructor works !!
	{
		dateClock clock2(hour, minute, second, day, ddate, month, year);
		cout << "dateClock object -clock2- ";
		clock2.printTime();

		cout << endl << "check if clock1 equal clock2: " << clock1.equalTime(clock2) << endl;

	} // end enternal scope
	
	// to hold the command prompt window
	system("pause");
} // end main