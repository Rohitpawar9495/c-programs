#include<stdio.h>
int fact(int n);
int area(int side);
main()
{
	int ans,ans2,n,side;
	printf("ente the number");
	scanf("%d",&n);
	ans=fact(n);
	printf("factroial is :%d",ans);
	
	printf("enter the side");
	scanf("%d",&side);
	ans2=area(side);
	printf("area of cube is:%d",ans2);
}
int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}	return fact;
}
int area(int side)
{
	int area;
	area=6*side*side;
	return area;
}
