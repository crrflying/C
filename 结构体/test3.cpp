#include<stdio.h>
#include<stdlib.h>
#include "malloc.h"
//单向动态链表创建 

struct student{
	long int number;
	char name[30];
	int grade;
	struct student *next;  //指向下一结构体变量的指针 
};

struct student *create(struct student *head);
void output(struct student *head);

int main() 
{
	struct student *head;
	head = NULL;
	head = create(head);
	output(head);
}

struct student *create(struct student *head)
{
	struct student *p1, *p2;
	p1 = p2 = (struct student *) malloc (sizeof(struct student));
	scanf("%ld %s %d", &(*p1).number, &p1->name, &p1->grade);
	p1->next = NULL;
	while(p1->number > 0)
	{
		if(head == NULL)
		{
			head = p1;
		}
		else{
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct student *) malloc (sizeof(struct student));
		scanf("%ld %s %d", &p1->number, &p1->name, &p1->grade);
		p1->next = NULL;
	}
	free(p1);
	return head;
}

void output(struct student *head)
{
	while(head != NULL)
	{
		printf("%ld %s %d", head->number, head->name, head->grade);
	}
}
