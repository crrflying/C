#include<stdio.h>
//找到最大的两个元素

//方法3：递归+分治， 将数据分为两个部分，分别计算最大和次大值，然后比较两个部分的最大值，其中最大的作为目标值，小的和另一部分的最大值进行比较得到目标次大值 
void max3(int A[], int lo, int hi, int& x1, int& x2)
{
	int m=(lo + hi)/2;
	if(lo + 1 == hi)
	{
		if(A[lo] > A[hi])
		{
			x1 = A[lo];
			x2 = A[hi];
			return;
		}
		else{
			x1 = A[hi];
			x2 = A[lo];
			return;
		}
	}
	if(lo + 2 == hi)
	{
		if(A[lo] >= A[lo+1])
		{
			x1 = A[lo];
			x2 = A[lo+1];
			if(A[hi] > x2)
			{
				if(A[hi] > x1)
				{
					x2 = x1;
					x1 = A[hi];
					return;
				}
				else{
					x2 = A[hi];
					return;
				}
			}
			
		}
		else{
			x2 = A[lo];
			x1 = A[lo+1];
			if(A[hi] > x2)
			{
				if(A[hi] > x1)
				{
					x2 = x1;
					x1 = A[hi];
					return;
				}
				else{
					x2 = A[hi];
					return;
				}
			}
		}
		
	}
	
	int lmax1, lmax2, rmax1, rmax2;
	max3(A, lo, m, lmax1, lmax2);
    max3(A, m+1, hi, rmax1, rmax2);
    
    //比较两个部分的最大值，其中最大的作为目标值，小的和另一部分的最大值进行比较得到目标次大值 
    if(lmax1 > rmax1)
    {
    	x1 = lmax1;
    	x2 = rmax1 > lmax2 ? rmax1 : lmax2;
    	return;
	}
	else{
		x1 = rmax1;
		x2 = rmax2 > lmax1 ? rmax2:lmax1;
		return;
	}
}

int main()
{
	int A[10] = {8, 3, 30, 25, 10, 22, 31, 35, 21, 19};
	int x1 = 0;
	int x2 = 0;
	max3(A, 0, 9, x1, x2);
	printf("%d %d", x1, x2);
	
/*
	int n;
	scanf("%d", &n);
	int l[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &l[i]);
	}
	
	int max1=l[0], max2=l[1], temp;
	
	//方法1：三次循环, 算法复杂度是 2*n-3
	for(int i=0;i<n;i++)
	{
		if(max1<l[i])
		{
			max1 = l[i];
			temp = i;
		}
	}
	for(int i=0;i<temp;i++)
	{
		if(max2 < l[i]) max2 = l[i];
	}
	for(int i=temp+1;i<n;i++)
	{
		if(max2 < l[i]) max2 = l[i];
	}
	
	
	//方法2：指向某一个元素进行比较,算法复杂度 最好的情况下n-1，最坏2*n-3 
	if(max1 < max2)
	{
		temp = max1;
		max1 = max2;
		max2 = temp;
	}
	for(int i=2;i<n;i++)
	{
		if(l[i] > max2)
		{
			max2 = l[i];
			if(max2 > max1)
			{
				temp = max1;
				max1 = max2;
				max2 = temp;
			}
		}
	}
	*/
	
	//printf("%d %d", max1, max2);
}
