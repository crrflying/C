#include<stdio.h>
#include<string.h>

char A[60], B[60];
int lena, lenb;
int LST(int i, int j);
int lst_dp(char a[], char b[]) ;

//最长公共字符长度


int main(void)
{
	//scanf("%s %s", &A, &B);
	//lena = strlen(A);
	//lenb = strlen(B);
	//int len = LST(0, 0);
	char a[] = "ABCBDAB";
	char b[] = "BDCABA";
	int len = lst_dp(a, b);
	printf("%d", len);
}


 //第一种方法是利用递归求解 
int LST(int i, int j)
{
	if(i >= lena || j >= lenb)  //递归基 
	{
		return 0;
	}
	if(A[i] == B[j])  //减而治之 
	{
		return 1 + LST(i+1, j+1);
	}
	else //分而治之 
	{
		return LST(i+1, j) > LST(i, j+1) ? LST(i+1, j) : LST(i, j+1);
	}
	
}


//第二种方法是利用动态规划求解 
int lst_dp(char a[], char b[]) 
{
	int a_len = strlen(a);
	int b_len = strlen(b);
	int num[a_len][b_len];
	for(int i=1;i<=lena;i++)
	{
		for(int j=1;j<=lenb;j++)
		{
			if(a[i-1] == b[j-1])
			{
				num[i][j] = 1 + num[i-1][j-1];
			}
			else{
				num[i][j] = num[i][j-1]>num[i-1][j]?num[i][j-1]:num[i-1][j];
			}
		}
	}
	return num[a_len][b_len];
}

