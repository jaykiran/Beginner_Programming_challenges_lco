#include<iostream>

using namespace std;

int main()
{
	int n, t;
	cout<<"enter number";
	cin>>n;
	cout<<"enter testcases";
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	return 0;
}
