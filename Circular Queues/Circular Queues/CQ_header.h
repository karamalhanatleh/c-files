// ****************** queueType Class definition **********************
const int size=10;
class QueueType
{
public:
	QueueType();
	~QueueType();
	bool isEmpty() const;
	bool isFull() const;
	void print() const;
	int getCount () const;
		
	void append(int e);
	void serve();
	int retrieve() const;
	
	int search(int e) const;
	
protected:
	int queue[size];
	int count, front, rear;//count in queue just like count in list, stack
    //front is the index of the first element in the queue
	//rear is the index of the last element in the queue
};