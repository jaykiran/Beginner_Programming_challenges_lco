#include<iostream>

using namespace std;

//without using *,/,loop

int multiply(int x, int y)
{
	if(y==0)
	{
		return 0;
	}
	
	if(y>0)
	{
		return(x+multiply(x,y-1));
	}
	
	if(y<0)
	{
		return(-multiply(x,-y));
	}
}

int main()
{
	int n = 1200000;
	int x = 365;
	int ans;
	
	ans = multiply(n,x);
	cout<<"For an year, the city bus system carries"<<ans<<" people";
}
