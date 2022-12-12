#include <iostream>
#include "CQ_header.h"
using namespace std;

// ******************** Main Function ********************
void main ()
{
	int id;
	int total;
	cout << "enter the number of people (0-" << size <<"): "; 
	cin >> total;
	
	QueueType queue;
	for (int i = 0; i < total; i++)
	{
		cout << "enter id for " <<i+1<< " person: ";
		cin >> id;
		queue.append(id);
	} // end for -i-
	cout << "\nafter append, the queue is:" << endl;
	queue.print();

	queue.serve();
	cout << queue.retrieve() << endl;
	cout << "after serving one person, the queue is:" << endl;
	queue.print();
	
	queue.serve();
	cout << queue.retrieve() << endl;
	cout << "after serving 2 persons, the queue is:" << endl;
	queue.print();

	cout << "\n\n" << queue.search(-100); // -1
	queue.append(-100);
	cout << "\n\n*************\n\n";
	queue.print();
	cout << "\n\n" << queue.search(-100);
	
	// to hold the command prompt window
	system("pause");
} // end main