//function overridiing 
#include<iostream>
using namespace std;

class Base{
	
	public:
		void print()
		{
			cout<<"base class"<<endl;
		}
	
	
};

class derived:public Base{
	
	public:
		void print()
		{
			cout<<"derived class"<<endl;
		}
	
};

int main()
{
    derived  d1;
    Base b1;
    
    d1.print();
    b1.print();
	
}
