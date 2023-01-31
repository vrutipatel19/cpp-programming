//class member access(->) and virtual and polymorphisam
#include<iostream>
using namespace std;
class shape
{
	public:
		int height;
		int width;
		float rad;
		shape(int h=0,int w=0)
		{
			height=h;
			width=w;
		}
		shape(float r=0)
		{
			rad=r;
		}
		 virtual float area()
		{
			cout<<"hello"<<endl;
		}
}*s;
class rect:public shape
{
	public:
	rect(int h=0,int w=0):shape(h,w){}
	float area()
	{
		cout<<height*width<<endl<<endl;	
	}	
}r(3,4);
class cir:public shape
{
	public:
	cir(float r=0):shape(r){}
	float area()
	{
		cout<<3.14*rad*rad<<endl<<endl;
	}
}c(3);
int main()
{
	s=&r;
	s->area();
	s=&c;
	s->area();
}
