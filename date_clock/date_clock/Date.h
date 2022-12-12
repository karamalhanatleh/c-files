#ifndef Date_H
#define Date_H
class Date
{
	int day, month, year;

public:
	//Date();
	Date(int d, int m, int y);
	void print() const;
	void set(int, int, int);
	
	int getDay() const;
	int getMonth() const;
	int getYear() const;
};

#endif