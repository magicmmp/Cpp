#include <iostream>
#include <vector>
 
using namespace std;
 
int main(void)
{
	vector<int> v(10,2);
	
	cout << "v.size() = " << v.size() << ", v.capacity() = "<< v.capacity() <<endl;
 
	v.reserve(20);
	cout<<"v.reserve() :change vector's  capacity"<<endl;
	cout << "v.size() = " << v.size() << ", v.capacity() = " << v.capacity() << endl;
 	v.resize(6);
    cout<<"v.resize(),to add or delete some element back of vecotr"<<endl;
    cout << "v.size() = " << v.size() << ", v.capacity() = " << v.capacity() << endl;
	return 0;
}

