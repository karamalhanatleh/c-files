#include "LQ_Header.h"
#include <iostream>
using namespace std;

void main ()
{
	QueueType q;
	q.append(10);
	q.append(20);
	q.append(30);
	q.append(40);
	
	q.print();
	cout << "\n" << q.search(100) << "\n";
	cout << q.retrieve() << endl;
	
	q.serve();
	q.serve();
	q.append(100);

	q.print();
	cout << "\n" << q.search(100) << "\n";
	cout << q.retrieve() << endl;
}