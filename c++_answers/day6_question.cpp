//A floppy disk shows f bytes free and u bytes used. if you delete a file of size o bytes and create a new file of size n bytes, how many free bytes will the floppy disk have?

#include<iostream>

using namespace std;

int main()
{
	int f,u,o,n;
	cout<<"enter free bytes in floppy disk\n";
	cin>>f;
	cout<<"enter used bytes in floppy disk size\n";
	cin>>u;
	cout<<"enter file size of o \n";
	cin>>o;
	cout<<"enter file size of n \n";
	cin>>n;
	
	cout<<" when you delete a file size of"<<o<<"bytes then \n";
	f = f+o;
	u = u-o;
	cout<<"free bytes are "<<f<<" and used bytes are "<<u;
	
	cout<<"when you again create a file size of"<<n<<"bytes then \n";
	f = f-n;
	u = u+n;
	cout<<"free bytes are "<<f<<"and used bytes are "<<u;	
	
}


