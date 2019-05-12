#include<stdio.h>
#include<math.h>
struct alt{
	char id[4];
	float x;
	float y;
	float dis;
};
int main()
{
	int n;
	scanf("%d", &n);
	struct alt alts[n];
	int max=0, min=0;
	for(int i=0;i<n;i++)
	{
		scanf("%s %f %f", &alts[i].id, &alts[i].x, &alts[i].y);
		alts[i].dis = sqrt(pow(alts[i].x, 2) + pow(alts[i].y, 2));
		if(alts[i].dis > alts[max].dis)
		{
			max = i;
		}
		if(alts[i].dis < alts[min].dis)
		{
			min = i;
		}
	}
	printf("%s %s", alts[min].id, alts[max].id);
}
