#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    int c = a>b?b:a;
    int maxy = 1;
    for(int i=2;i<=c;i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            maxy = i;
        }
    }
    int minb = maxy * (a/maxy) * (b/maxy);
    cout<<minb<<endl;
}
