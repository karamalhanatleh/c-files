#include <iostream>
#include "LQ_Header.h"
using namespace std;

// ************************************************************************
// ******************** queueType Functions definition ********************
// ************************************************************************

// ******************** queueType ********************
QueueType::QueueType()
{
	count = 0;
} // end constructor

// ******************** ~queueType ********************
QueueType::~QueueType()
{
	cout << "We are about to delete the queue...\n";
} // end destructor

// ******************** isempty ********************
bool QueueType::isEmpty() const
{
	return count == 0;
} // end func -isempty-

// ******************** isfull ********************
bool QueueType::isFull() const
{
	return count == size;
} // end fun -isfull-

// ******************** print ********************
void QueueType::print() const
{
	if(!isEmpty())
	{
		int i;
		for (i = 0; i <count; i++)
			cout << "queue item[" <<i<<"] = " << queue[i]<<endl;
	} // end if -!isempty-
	else
		cout << "*** in print: underflow!!, the queue is empty\n";
} // end fun -print-

// ******************** getCount ********************
int QueueType::getCount() const
{
	return count;
} // end fun -getCount-

// ******************** append ********************
void QueueType::append(int e) // identical to addToLast in the list
{
	if(!isFull())
	{
		// always add elements to the end of the queue
		queue[count++] = e;
	} // end if -!isfull-
	else
		cout << "*** in append: overflow!!, the queue is full\n";
} // end fun -append-

// ******************** serve ********************
void QueueType::serve()
{
	if(!isEmpty())
	{
		cout << "%% serving the first element in the queue: " << queue[0]<<endl;
		for (int i = 0; i < count-1; i++)
			queue[i] = queue[i+1];
		count--;
	} // end if -!isempty-
	else
		cout << "*** in serve: underflow!!, the queue is empty\n";
} // end fun -serve-

// ******************** retrieve ********************
int QueueType::retrieve() const
{
	if(!isEmpty())
	{
		cout << "%% returning the first element in the queue: " << queue[0]<<endl;
		return queue[0];
	} // end if -!isempty-
	else
		cout << "*** in retrieve: underflow!!, the queue is empty\n";
} // end fun -retrieve-


// ******************** search ********************
int QueueType::search(int e) const
{
	int pos=-1;
	if(!isEmpty())
	{
		for(int i = 0; i < count; i++)
			if(queue[i] == e)
			{
				pos=i;
				break;
			}// end if -queue[i]==e-
	} // end if -!isempty-
	else
		cout<<"*** in search: underflow!!, the queue is empty\n";
	return pos;

} // end fun-search-
