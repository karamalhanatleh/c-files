#include<iostream>
#include"triangle_h.h"
#include"student_h.h"
using namespace std;

triangle::triangle()
{
	{
		static int i=0;
		i++;
	cout<<i<<":constructor \n ";	
	base=0;
	height=0;

	}//end
}
triangle::triangle(int a)
{
	cout<<"p constructor \n";
}
triangle::triangle(int b , int h )
{
	base =b;
	height=h;
	cout<<"p constructor \n";
	
}

void triangle::set(float b, float h)
	{
	base=b;
	height=h;
	}


float triangle::area()
	{
		return 0.5*base*height;
	}

	void triangle::print()
{
	cout<<"base= "<<base<<endl
		<<"hetght= "<<height<<endl
		<<" area = "<<area()<<endl;
}//end

stu::stu()
{

strcpy(name,"no name");	
id=0;

};



stu::stu(char n [], int i=99)
{
	cout<<"parameterize constructor\n";
	strcpy(name,n);
	id=i;
}
void stu::print()
{
	cout<<"name = "<<name<<endl;
	cout<<"id = "<<id<<endl;
};

stu::stu(char n[])
{
strcpy(name, n);

}





