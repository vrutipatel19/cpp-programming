//inline function
#include<iostream>
using namespace std;


inline int max(int a,int b)
{
	return (a>b)?b:a;
	
}

int main()
{
	cout<<max(100,20);
}

