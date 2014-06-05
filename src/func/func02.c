#include<stdio.h>

void main()
{
	int max(int x,int y); //形参未占用内存空间，调用时形参才会占内存空间
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