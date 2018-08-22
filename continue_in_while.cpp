#include<iostream>

using namespace std;

int main()
{
	int i;
	while(i<10)
	{
		i++;
		if(i%2)
			continue;
		else
			cout<<"i= "<<i<<endl;
	}

}
