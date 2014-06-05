#include<stdio.h>

void main()
{
	float max(float x,float y); 
	float a,b,c;

	scanf("%f %f",&a,&b);
	c = max(a,b);

	/**注意输出
    printf("Max is %d :",c);
    **/
    printf("Max is %f\n",c);
}

float max(float x,float y)
{
	float z;
	z = x > y ?x : y;
	return (z);
}
