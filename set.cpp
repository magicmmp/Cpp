#include<set>
#include<iostream>

using namespace std;

int main()
{
	int A[5]={1 ,3,2 ,5,4};
	multiset<int>s(A,A+5);
	for(set<int>::reverse_iterator it=s.rbegin();it!=s.rend();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;



}
