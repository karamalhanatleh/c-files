// ****************** clockType Class definition **********************
#ifndef headerFileClockType_h
#define headerFileClockType_h

class clockType
{
public:
	void setTime(int, int, int);
	void getTime(int&, int&, int&) const;
	void printTime() const;
	void incSec();
	void incMin();
	void incHr();
	bool equalTime(const clockType&) const;
	clockType (); // constructor withoutparameters
	clockType (int, int = 0, int = 0); // constructor with parameters and with default values
	~clockType();
private:
	int hr;
	int min;
	int sec;
};
#endif