#include<iostream>
#include"car.h"
#include"triangle.h"
using namespace std;
#pragma ince
void main()
{
	/*
	car x;
	x.setname("kia");
	x.setccolor("red");
	x.setmodel(2018);
	x.setmaxspeed(222);
	x.print();
	*/
	triangle ob;
	ob.set(5,10);
	cout<<ob.area()<<endl;
}// end void main
