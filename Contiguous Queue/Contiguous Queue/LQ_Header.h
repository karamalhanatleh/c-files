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
	int count;
};