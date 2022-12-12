#include "Brand.h"
#include "Date.h"
// ****************** Class definition **********************
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
	clockType (int, int=0, int=0, string="****", string="----", int=1, int=1, int=2000); // constructor with parameters and with default values
	~clockType();

	void setInfo(int, int, int, string, string, int, int, int);
	void printInfo() const;

private:
	int hr;
	int min;
	int sec;
	Date ManDate;
	Brand brand;
};