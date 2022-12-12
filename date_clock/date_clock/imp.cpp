#include <iostream>
#include <string>
#include "Date.h"
#include "headerFileClockType.h"
using namespace std;

// ************************************************************************
// ******************** Date Functions definition ********************
// ************************************************************************
Date::Date(int d, int m, int y)
{
	set(d, m, y);
}

void Date::print() const
{
	cout << day << "/" << month << "/" << year << endl;
}

void Date::set(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
	
int Date::getDay() const
{
	return day;
}
	
int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

// ************************************************************************
// ******************** clockType Functions definition ********************
// ************************************************************************

// ******************** setTime ********************
void clockType::setTime(int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;
	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;
	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;
} // end func -setTime-

// ******************** getTime ********************
void clockType::getTime(int& hours, int& minutes,
int& seconds) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
} // end fun -getTime-

// ******************** printTime ********************
void clockType::printTime() const
{
	if (hr < 10)
		cout << "0";
	cout << hr << ":";
	if (min < 10)
		cout << "0";
	cout << min << ":";
	if (sec < 10)
		cout << "0";
	cout << sec << endl;
} // end fun -printTime-

// ******************** incHr ********************
void clockType::incHr()
{
	hr++;
	if (hr > 23)
		hr = 0;
} // end fun -incHr-

// ******************** incMin ********************
void clockType::incMin()
{
	min++;
	if (min > 59)
	{
		min = 0;
		incHr(); //increment hours
	}
} // end fun -incMin-

// ******************** incSec ********************
void clockType::incSec()
{
	sec++;
	if (sec > 59)
	{
		sec = 0;
		incMin(); //increment minutes
	}
} // end fun -incSec-

// ******************** equalTime ********************
bool clockType::equalTime(const clockType& otherClock) const
{
	return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
} // end fun -equalTime-

// ******************** clockType ********************
clockType::clockType():ManDate(1,1,200)
{
	hr = min = sec = 0;
	brand.BrandName = "****";
	brand.CompanyName = "----";
} // end constructor without parameters

// ******************** clockType ********************
clockType::clockType(int h, int m, int s, string BN, string CN, int a, int b, int c):ManDate(a,b,c)
{
	setTime(h, m, s);
	brand.BrandName = BN;
	brand.CompanyName = CN;
} // end constructor with parameters

// ******************** ~clockType ********************
clockType::~clockType()
{
	cout << "\n*** in clockType destructor, Good bye object !! ***\n";
} // end destructor

void clockType::setInfo(int h, int m, int s, string BN, string CN, int a, int b, int c)
{
	setTime(h, m, s);
	brand.BrandName = BN;
	brand.CompanyName = CN;
	ManDate.set(a,b,c);
}

void clockType::printInfo() const
{
	cout << "The time is: ";
	printTime();

	cout << "The Manufacture date is: ";
	ManDate.print();

	cout << "The Brnad Info are: ";
	cout << brand.BrandName << ", " << brand.CompanyName << endl;
}