//Static Function Members
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
	   static int getCount() 
	   {
         return objectcount;
       }
};
int Box::objectcount=0;


int main()
{
	  cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2

   // Print total number of objects after creating object.
   cout << "Final Stage Count: " << Box::getCount() << endl;

}

