#include<stdio.h>
int fact();
int cube();
main()
{
	int ans,ans2;
	ans=fact();
	ans2=cube();
	printf("\n factorial is:%d",ans);
	printf("\n area of cube is:%d",ans2);
	int fact();
   int cube();
}
  int fact()
{
	int i,n,fact=1;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int cube()
{
	int area,side;
	printf("enter the side");
	scanf("%d",&side);
	area=6*side*side;
	return area;
}
