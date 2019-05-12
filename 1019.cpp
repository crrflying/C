#include<stdio.h>
//降序排序（冒泡法） 
int *sort_de(int number[4])
{
	int temp;
	//i指针指示轮次，每一轮过后最小的数字到达最后 
	for(int i=0;i<3;i++)
	{
		//j指针指示两个数字，进行比较 
		for(int j=0;j<4-i-1;j++)
		{
			if(*(number+j)< *(number+j+1))
			{
				temp = *(number+j);
				*(number+j) = *(number+j+1);
				*(number+j+1) = temp;
			}
		}
	}
	return number;
}

//升序排序 
int *sort_in(int number[4], int len)
{
	int temp;
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(*(number+j) > *(number+j+1))
			{
				temp = *(number+j);
				*(number+j) = *(number+j+1);
				*(number+j+1) = temp;
			}
		}
	}
	return number;
}

int main()
{
	int N;
	scanf("%d", &N);
	int a, b, c, d;
	int *number_de;
	int *number_in;
	int num_de;
	int num_in;
	do{
		a = N%10;  //个位 
	    b = N/10%10; //十位 
	    c = N/100%10; //百位 
	    d = N/1000; //千位 
	    int number[4]= {a, b, c, d};
	    
	    if(a==b&&b==c&&c==d)
	    {
	    	printf("%d - %d = 0000", N, N);
	    	break;
		}
		else
		{
			number_de = sort_de(number);
		    num_de = number_de[0] * 1000 + number_de[1] * 100 + number_de[2] * 10 + number_de[3];
		
		    number_in = sort_in(number, 4);
		    num_in = number_in[0] * 1000 + number_in[1] * 100 + number_in[2] * 10 + number_in[3];
		    
		    N = num_de - num_in;
		    printf("%04d - %04d = %04d\n" , num_de, num_in, N);
		}
	}while((num_de-num_in) != 6174);
}
