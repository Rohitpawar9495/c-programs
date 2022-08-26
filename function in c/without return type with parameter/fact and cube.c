#include<stdio.h>
void fact(int n);
void area(int side);
main()
{
	int side,n;
	printf("enter the side");
	scanf("%d",&side);
	printf("enter the number");
	scanf("%d",&n);
    fact(n);
    area(side);
}
void fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n factorial is:%d",fact);
}
void area(side)
{
	int area;
	area=6*side*side;
	printf("\n area of cube is:%d",area);
}
