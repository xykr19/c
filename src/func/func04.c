#include<stdio.h>

void main()  //stdcall 自右向左
{
    int f(int a,int b);

    int i=2,p;

	//p=f(i,++i);
    p=f(i,i++);  

    printf("%d\n",p);  //0
}

int f(int a,int b) //a=3 b=3
{
    int c;
    if(a>b)
    {
        c=1;
    }
    else if(a==b) 
    {
        c=0;
    }
    else
    {
        c=-1;
    }
    return c;
}
