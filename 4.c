#include<stdio.h>
#include<string.h>

extern delete_char(char str[], char del)
{
	int i, j;
	for(i=j=0;i<strlen(str);i++)
	{
		if(str[i] != del)
		{
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}
