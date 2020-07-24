#include<iostream>

using namespace std;

int main()
{
	int n=800;
	int x=8;
	int count=0;
	
	while(n>=x)
	{
		n=n-x;
		count++;
	}
	cout<<count;
	return 0;
}
