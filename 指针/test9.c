#include<stdio.h>

copy_str(char from[], char to[])
{
	while(*to++ = *from++);
}

con_str(char from[], char to[])
{
	while(*from++);
	*from--;
	while(*from++ = *to++);
}

int main()
{
	char from[] = "study hard for work,";
	char to[] = "work hard for our country.";
	printf("%s %s\n", from, to);
	con_str(from, to);
	printf("%s", from);
}
