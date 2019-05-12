#include<iostream>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
long long gcd(long long a, long long b)
{
	return b==0?abs(a):gcd(b, a%b);
}
int main()
{
	int n;
	cin>>n;
	long long x, y, sumx = 0, sumy=1, gcdvalue;
	char c;
	while(n){
		cin>>x>>c>>y;
		gcdvalue = gcd(x, y);
		x = x / gcdvalue;
		y = y / gcdvalue;
		//分数相加运算 
		sumx = x * sumy + sumx * y;
		sumy = y * sumy;
		gcdvalue = gcd(sumx, sumy);
		sumx = sumx / gcdvalue;
		sumy = sumy / gcdvalue;
		n--;
	}
	long long zhengshu = sumx/sumy;  //整数部分
	sumx = sumx - sumy * zhengshu;
	if(zhengshu != 0)
	{
		cout<<zhengshu;
		if(sumx != 0) cout<<' ';
	} 
	if(sumx != 0) cout<<sumx<<c<<sumy;
	if(zhengshu == 0 && sumx == 0) cout<<0;
	return 0;
} 
