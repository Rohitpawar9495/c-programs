#include<stdio.h>
int add();
int mul();
int a,b,c;
main()
{
	int ans,ans2;
	ans=add();
	ans2=mul();
	printf("\n add=%d",ans);
	printf("\n mul=%d",ans2);
	int add();
	int mul();
}
	
	int add()
	{
		int a,b,c;
		printf("\n enter a&b");
		scanf(" %d%d",&a,&b);
		c=a+b;
		return c;
	}
	int mul()
	{
		int a,b,c;
		printf("\n enter a&b");
		scanf(" %d%d",&a,&b);
		c=a*b;
		return c;
}
