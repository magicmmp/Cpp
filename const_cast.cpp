#include<iostream>

using namespace std;

class B
{
public:
	B(int v0):v(v0) { }
public:
    int v;
};

int main(int argc, char const *argv[]) 
{
	const B b1(1);
    const B b2(2);
    const B b3(3);
    cout<<"before const_cast:"<<endl;
	cout<<"b1.v ="<<b1.v<<endl;
	cout<<"b2.v ="<<b2.v<<endl;
	cout<<"b3.v ="<<b3.v<<endl;

//	b1.v=5;
	B *p2 = const_cast<B*>(&b2);
    p2->v=5;
	B &p3 = const_cast<B&>(b3);
    p3.v=5;
	cout<<"try to change b.v=5,afetr const_cast:"<<endl;
    cout<<"b1.v ="<<b1.v<<endl;
    cout<<"b2.v ="<<b2.v<<endl;
    cout<<"b3.v ="<<b3.v<<endl;
}
