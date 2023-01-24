//static members of a class
#include<iostream>
using namespace std;


class Box{
	private:
      double length;     
      double breadth;   
      double height;
      
	public :
		static int objectcount;
		
		Box(double l,double b,double h)
		{
			cout <<"Constructor called." << endl;
         	length = l;
         	breadth = b;
         	height = h;
         	
         	objectcount++;
		}
		double volume()
		{
			return length*breadth*height;
		}
	
};
int Box::objectcount=0;


int main()
{
	Box b1(10.0,20.0,30.0);
	Box b2(10.0,20.0,30.0);
	cout<<"ans="<<b1.volume()<<endl;
	
	cout<<"counter="<<Box::objectcount;
}

