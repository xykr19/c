#include<stdio.h>

void main()
{
	int max(int x,int y); //�β�δռ���ڴ�ռ䣬����ʱ�ββŻ�ռ�ڴ�ռ�
	int a,b,c;

	scanf("%d %d",&a,&b);
	c = max(a,b);

	printf("Max is %d :",c);
}

int max(int x,int y)
{
	int z;
	z = x > y ?x : y;
	return (z);
}