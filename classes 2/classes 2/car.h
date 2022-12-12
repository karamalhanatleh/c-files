//class car

using namespace std;

class car{
private:
	char color[10];
	char name[15];

	int maxspeed;
	int model;

public:
	void setname(char n[])
	{
		strcpy_s(name,n);

	}
	void setccolor(char n[])
	{
		strcpy_s(color , n );
	}
	void setmaxspeed(int m)
	{
		maxspeed =m;
	}
	void setmodel(int m)
	{
	model=m;
	}
	char* getname()
	{
		return name;
	}

	char* getcolor()
	{
	return color;
	}

	int getmaxspeed()
	{
		return maxspeed;
	}

	int getmodel()
	{
		return model;
	}
	void print()
	{
cout<<"name ="<<name<<
			"\n color = "<<color<<
			"\nmaxspeed"<<maxspeed<<
			"\nmodel\n";
		
	}






};