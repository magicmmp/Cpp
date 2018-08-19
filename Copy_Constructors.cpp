#include<iostream>
#include<string.h>
using namespace std;

class CA
{
public:
	CA(int b,char*cstr)
	{
		a=b;
		str=new char[b];
		strcpy(str,cstr);
	}
	CA(const CA& C)  //deep copy constructor
	{
		a=C.a;
		str=new char[a];
		if(str!=0)
			strcpy(str,C.str);
	}
	void show()
	{
		cout<<str<<endl;
	}
	~CA()
	{
		delete str;
	}
private:
	int a;
	char* str;
};

int main()
{
	CA A(sizeof("This is deep copy-constuctor.")+1,"This is deep copy-constuctor.");
    CA B=A;
    B.show();
    return 0;
}



















