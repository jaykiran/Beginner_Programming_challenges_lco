#include<iostream>

using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void BubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for(i=0;i<n;i++)
	{
		swapped = false;
		for(j=0;j<n-i-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
		}
		if(swapped==false)
		{
			break;
		}
	}
}

int main()
{
	int arr[]={66,57,54,53,64,52,59};
	int n = sizeof(arr)/sizeof(int);
	BubbleSort(arr,n);
	cout<<arr[n-1]<<"is the best time";
	
	return 0;
}
