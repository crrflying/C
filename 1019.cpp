#include<stdio.h>
//��������ð�ݷ��� 
int *sort_de(int number[4])
{
	int temp;
	//iָ��ָʾ�ִΣ�ÿһ�ֹ�����С�����ֵ������ 
	for(int i=0;i<3;i++)
	{
		//jָ��ָʾ�������֣����бȽ� 
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

//�������� 
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
		a = N%10;  //��λ 
	    b = N/10%10; //ʮλ 
	    c = N/100%10; //��λ 
	    d = N/1000; //ǧλ 
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
