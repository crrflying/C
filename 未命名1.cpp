#include<iostream>
using namespace std;

void quickSort(int a[], int low, int high)
{
	if(low>=high){
		return;
	}
	int i=low, j=high, temp;
	int first = a[low];
	while(i<j)
	{
		//这里也要控制i，j的关系，防止循环内部使得ij值不符合条件 
		while(i<j&&a[j]>=first){
			j--;
		}
		while(i<j&&a[i]<=first)
		{
			i++;
		}
		
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
	

    a[low] = a[i];
	a[i] = first;

	quickSort(a, low, i-1);
	quickSort(a, i+1, high);
}

int main()
{
	int a[] = {6,1,2,7,9,3,4,5,10,8};
	quickSort(a, 0, 9);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
}
