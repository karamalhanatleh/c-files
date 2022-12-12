#include<iostream>
using namespace std;
void num(float n)
{
	cout<<(n*(n-1))/2<<endl;
}
void main()
{
	num(1000000);
}