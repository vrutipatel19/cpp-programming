#include<iostream>
using namespace std;
class distance
{
	private:
		int feet;
		int inch;
		
		public:
			distance()
			{
				feet=0;
				inch=0;
			}
			distance(int f,int i)
			{
				inch=i;
				feet=f;
				
			}
			
			void fun()
		{
			cout << "F: " << feet << " I:" << inch <<endl;
		}
		
		
		distance operator-()
		{
			feet= -feet;
			inch= -inch;
			
			return distance(feet,inch);
		}
		
 }D1(11, 10), D2(-5, 11);

int main()
{
	  //distance D1(11, 10), D2(-5, 11);

	 -D1;
	D1.fun();

-D2;
	D2.fun();
}
