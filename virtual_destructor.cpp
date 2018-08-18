#include<iostream>

using namespace std;

class Base 
{
 public:
	virtual ~Base() 
	{
		cout << "~Base()" << endl;
	}
};

class Derived1 : public Base 
{
public:
	Derived1():name_(new string("NULL")) {}
	Derived1(const string& n):name_(new string(n)) {}

	~Derived1() 
	{
    	delete name_;
    	cout << "~Derived1(): name_ has been deleted." << endl;
	}

private:
	string* name_;
};

class Derived2 : public Base 
{
public:
	Derived2():name_(new string("NULL")) {}
	Derived2(const string& n):name_(new string(n)) {}

	~Derived2() 
	{
    	delete name_;
    	cout << "~Derived2(): name_ has been deleted." << endl;
  	}

private:
	string* name_;
};

int main() 
{
	Base* base[2] = {
    	new Derived1(),
    	new Derived2("Bob")      
  	};
    for (int i = 0; i != 2; ++i) 
	{
    	delete base[i];    
    }
    return 0;
}











