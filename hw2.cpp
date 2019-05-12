#include<iostream>
#include<string>
#include<map>
using namespace std;



int main()
{
    string str;
    while(cin>>str)
    {
    	map<string, int> error;
    	int count=0;
    	string title, colnum;
    	int idx, spa;
    	for(int i=0;i<str.size();i++)
		{
			if(str[i] == '\\')
			{
			    idx = i;
			}
			
		}
		title = str.substr(idx+1);
		if(error.find(title) == error.end())
		{
			error[title] = 1;
		}
		else{
			error[title] += 1;
		}
		sort(error)
		
	}
}
