#include <iostream>
#include <string>
#include "headerFileClockType.h"
using namespace std;

// ******************** Main Function ********************
void main ()
{
	/*string day;
	int hour, minute, second;
	cout << "enter the hour, minute, second and day: \n";
	cin >> hour >> minute >> second >> day;
	*/
	// *********** clockType objects ***********
	cout << "**** clock1 ****\n";
	clockType clock1;
	clock1.printInfo();

	cout << "\n**** clock2 ****\n";
	clockType clock2(14);
	clock2.printInfo();

	cout << "\n**** clock3 ****\n";
	clockType clock3(12, 40, 33);
	clock3.printInfo();

	cout << "\n**** clock4 ****\n";
	clockType clock4(12, 40, 33, "A", "B", 15, 10, 2019);
	clock4.printInfo();


	// to hold the command prompt window
	system("pause");
} // end main