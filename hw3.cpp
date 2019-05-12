#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rdm[n];
    for(int i=0;i<n;i++)
    {
        cin>>rdm[i];
    }
    sort(rdm, rdm+n);
    cout<<rdm[0]<<endl;
	for(int i=1;i<n;i++)
    {
    	if(rdm[i] != rdm[i-1])
    	{
    		cout<<rdm[i]<<endl;
		}
    }
}
