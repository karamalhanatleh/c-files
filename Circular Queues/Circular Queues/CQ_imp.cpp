#include <iostream>
#include "CQ_header.h"
using namespace std;

/*
Before you read the code below, check this comment

This file is the implementation of a CIRCULAR QUEUE

**Notes:

1. In a circular queue, we keep two variables front and rear.
front is the index of the first element in the queue
rear is the index of the last element in the queue

2. The idea behind using circular queues is that we don't do
shifts when we add or delete, like what we did in Lists, Stacks and Linear Queues

3. To append an element to a circular queue we first
add one to rear then assign the value to queue[rear], 
then increase count by one. 

4. Notice that unlike count, rear is the INDEX of the last 
element in the queue so far, 
so the new element get inserted at rear+1. 
Whereas in List, the last element in the list was at count-1
that is why we inserted into list[count]

5. However, if rear==size-1, we cannot just add one to rear
because if we do so, we go out of the array, 
to solve this problem you have two options, either:
	5.1 check if rear==size-1, and then let rear =0, otherwise
	let rear= rear+1
	or
	5.2 always do rear= (rear+1)%size, it always works
6. To delete from the queue, advance front by 1 and decrease count
by one. However, the same problem (i.e. front==size-1)
can happen, to solve it follow what we did in step 5
, but this time uisng front not rear

*/


// ************************************************************************
// ******************** queueType Functions definition ********************
// ************************************************************************

// ******************** queueType ********************
QueueType::QueueType()
{
	count = 0;
	front = 0;
	rear = -1; // rear = size-1; should also works, but need modifications in the append ...etc
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
		for (i = front; i !=rear; i=(i+1)%size)
			cout << "queue item[" <<i<<"] = " << queue[i]<<endl;
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
void QueueType::append(int e)
{
	if(!isFull())
	{
		// always add elements to the rear (end) of the queue
		rear = ((rear+1) == size ? 0 : rear+1);
		queue[rear] = e;
		count++;
	} // end if -!isfull-
	else
		cout << "*** in append: overflow!!, the queue is full\n";
} // end fun -append-

// ******************** serve ********************
void QueueType::serve()
{
	if(!isEmpty())
	{
		cout << "%% serving the first element in the queue: " << queue[front]<<endl;
		front = ((front+1) == size ? 0 : front+1);		
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
		cout << "%% returning the first element in the queue: " << queue[front]<<endl;
		return queue[front];
	} // end if -!isempty-
	else
		cout << "*** in retrieve: underflow!!, the queue is empty\n";
} // end fun -retrieve-


// ******************** search ********************
int QueueType::search(int e) const
{
	int pos = -1;
	if(!isEmpty())
	{
		int i;
		for (i = front; i !=rear; i=(i+1)%size)
			if(queue[i] == e)
			{
				pos=i;
				break;
			}// end if -queue[i]==e-
			if(pos == -1)
				if(queue[rear] == e)
					pos = rear;
	} // end if -!isempty-
	else
		cout<<"*** in search: underflow!!, the queue is empty\n";
	return pos;
} // end fun-search-
