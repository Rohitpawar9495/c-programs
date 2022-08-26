#include<stdio.h>
int add(int a,int b);
int mul(int a,int b);
main()
{
	int ans,ans2,a,b;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	ans=add(a,b);
	printf("addition is :%d",ans);
	
	ans2=mul(a,b);
	printf("\n multiplication is :%d",ans2);
	scanf("%d%d",&a,&b);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
