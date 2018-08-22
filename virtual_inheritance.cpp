#include<iostream>
using namespace std;
 
class A  //´óª4
{
public:
	int a;
};
class B :virtual public A  //´óª12£¬±äa,b¹²8×½ڣ¬Ð»ùָÕ4
{
public:
	int b;
};
class C :virtual public A //ÓBһÑ12
{
public:
	int c;
};
class D :public B, public C //24,±äa,b,c,d¹²16£¬BµÄéÀָÕ4£¬CµÄéÀָÕ
{
public:
	int d;
};
 
int main()
{
	A a;
	B b;
	C c;
	D d;
	cout <<"The size of class A= "<<sizeof(a) << endl;
	cout <<"The size of class B= "<< sizeof(b) << endl;
	cout <<"The size of class C= "<< sizeof(c) << endl;
	cout <<"The size of class D= "<< sizeof(d) << endl;
	return 0;
}

