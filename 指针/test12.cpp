//ָ�뺯��
//���������ĳ��ѧ���ķ�����m��ʾ���ǵڼ���ѧ�� 
#include<stdio.h>
#define M 4
//float (*point)[M]��ʾ �� ��n��ʾ�� n�� 
float *search(float (*point)[M], int n)
{
	float *pt;
	pt = *(point + n);  //ʹ����ָ���� 
	return pt; 
}

int main()
{
	float score[][M] = {{80, 90, 80, 90}, {37, 90, 78, 90}, {80, 67, 80, 70}};
	float *p;
	int i, m;
	scanf("%d", &m);  //ѧ���� 
	p = search(score, m-1);
	for(i = 0;i<M;i++)
	{
		printf("%.2f ", *(p+i));
	}
} 
