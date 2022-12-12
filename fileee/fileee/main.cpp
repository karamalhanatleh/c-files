#include <iostream>

#include<string>
#include<fstream>

using namespace std;

void main()
{
	ifstream fi1;
	fi1.open("q.txt");
cout<<"%%%%%%%%%%%%%%%%%\n";
int i;
cin>>i;
for(int o=0;o<i ;o++)
{
fi1>>i;
cout<<i;
}

fi1.close();

}