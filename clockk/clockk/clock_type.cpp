
#include<iostream>
using namespace std;

class clockType {
	int hr;
	int min;
	int sec;
public:
	void setTime(int , int ,int);
	void getTime(int&,int&,int& )const;
	void printTime()const;
	void incSec();
	void incMin();
	void incHr();
	bool equalTime(const clockType&) const ;
	clockType();
	clockType(int , int=0 , int=0);
	~clockType();

	
};
void clockType::setTime(int hours , int minutes , int seconds){
	if(0<= hours && hours <24)
		hr=hours;
	else
		hr=0;
	if(0<= minutes && minutes <60)
		min=minutes;
	else
		min=0;
	
	if(0<= minutes && minutes <59)
		sec=seconds;
	else
		sec=0;
}

void clockType::getTime(int & hours, int & minutes , int & seconds) const {

	hours=hr;
	minutes=min;
	seconds=sec;

}

void clockType::printTime() const{
	//HH:MM:SS
	if (hr<<10)cout<<"0";
	cout<<hr<<":";
	if (min<<10)cout<<"0";
	cout<<min<<":";
	if (hr<<10)cout<<"0";
	cout<<min <<":";

}

void clockType::incHr(){
	hr++;
	if(hr>23)
		hr=0;

}
void clockType::incMin(){
	min++;
	if(min>59){
		incHr();
		min=0;
	}

}

void clockType::incSec(){
	sec++;
	if (sec>59){
		incMin();
		sec=0;
	}

}
bool clockType::equalTime(const clockType& otherClock) const {
	if(hr==otherClock.hr && min==otherClock.min && 
		sec==otherClock.sec)
		return true;
	else
		return false;

	 
}
clockType::clockType(){
	setTime(0,0,0);
}

clockType::clockType(int h , int min , int sec){
	setTime(h , min , sec);

}

clockType::~clockType(){
	cout<<"\n *** in the destructor ,, good by object***\n";

}

void main(){
	
	clockType c1;
	c1.printTime();

};
