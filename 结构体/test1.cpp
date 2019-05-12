#include<stdio.h>

int main(void)
{
	struct birthday
	{
		int year;
		int month;
		int day;
	};
	struct stu_score
	{
		long int number;
		char name[30];
		struct birthday birth;
		int math;
		int chinese;
		int english;
	}student1 = {21721226, "ÍõÎª", {1994,8,7}, 95, 93, 87};
	struct stu_score student2 = {21721226, "lisa", {1995,7,7}, 91,88, 64};
	printf("id	name	birthday	math	chinese		english\n");
	printf("%ld %s	%d-%d-%d%4d%4d%4d\n", student1.number, student1.name, student1.birth.year, 
	student1.birth.month, student1.birth.day, student1.math, student1.chinese, student1.english);
} 
