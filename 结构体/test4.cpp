#include<stdio.h>
int main()
{
typedef union{ long a[2]; short int b[4]; char c[12];}Y;

Y your;


printf("%d\n",sizeof(your));
}
