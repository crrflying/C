#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int> list1;
    int a;
    while(cin>>a)
    {
        list1.push_back(a);
        if(cin.get() == '\n')
        {
            break;
        }
    }
    while(cin>>a)
    {
        list1.push_back(a);
        if(cin.get() == '\n')
        {
            break;
        }
    }
    list1.sort();
    //sort(list1.begin(), list1.end());
    for(auto i =list1.begin(); i!=list1.end();i++)
    {
    	cout<<*i<<endl;
	}
}
