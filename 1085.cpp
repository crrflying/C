#include<stido.h>
#include<ctype.h>

struct student{
	char id[6];
	int grade;
	char school[6];
};

struct schools{
	int rank;
	char name[6];
	int grades;
	int s_num;
};

int main()
{
	int n;
	struct student s[n];
	struct schools ss[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %s", &s[i].id, &s[i].grade, &s[i].school);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i].school == s[j].school)
			{
				for(int k=j;k<n;k++)
				{
					ss[i].name = s[k].school;
				}
			}
		}
	}
}
