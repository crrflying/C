#include<iostream>
#include<string>
using namespace std;

 
int main()
{
	string number[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	string danwei[6] = {"", "Shi", "Bai", "Qian", "Yi", "Wan"};
	int J[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};
	int n;
	scanf("%d", &n);
	if(n==0)
	{
		cout<<"ling";
		return 0;
	}
	if(n<0)
	{
		cout<<"Fu ";
		n=-n;
	}
	bool zero = false;
	int printCnt = 0;
	int part[3];
	part[0] = n/100000000;
	part[1] = n%100000000/10000;
	part[2] = n%10000;
	int curpos, cur;
	for(int i=0;i<3;i++)
	{
		int temp = part[i];
		for(int j=3;j>=0;j--)
		{
			curpos = 8-4*i+j;
			if(curpos>8) continue;
			cur = (temp/J[j])%10;
			if(cur!=0)
			{
				if(zero)  //还没有非零数字前输出合适的零 
				{
					printCnt++ == 0?cout<<"ling":cout<<" ling";
					zero = false;
				}
				if(j == 0) //个位 
				{
					printCnt++ == 0?cout<<number[cur]:cout<<" "<<number[cur];
				}
				else  //其他位 
				{
					printCnt++ == 0?cout<<number[cur]<<" "<<danwei[j]:cout<<" "<<number[cur]<<" "<<danwei[j];
				}
			}
			else
			{
				if(!zero && j!=0 && n/J[curpos]>=10) zero=true;
			}
		}
		if(i!=2 && part[i]>0) cout<<" "<<danwei[i+4];
	}
	 return 0;
}
