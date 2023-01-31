#include<iostream>
using namespace std;
class demo
{
	public:
		int no;
		demo(int i)
		{
			no=i;
		}
		demo operator-()
		{
			  
			no=-no;
		}
		demo operator--()
		{
			no++;
		}
		int ans()
		{
			return no;
		}
}d(-34);
int main()
{
  	-d;
  --d;
	cout<<d.ans();	
}
