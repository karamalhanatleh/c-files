using namespace std;
class triangle
{
	float base;
	float height;
public:
	void set(float b, float h)
	{
	base=b;
	height=h;
	}
	float area()
	{
		return 0.5*base*height;
	}
	void print()
	{
	cout<<"base= "<<base
		<<"\n hetght= "<<height
		<<"\n area = "<<area();
	}






}