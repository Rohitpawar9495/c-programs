#include<stdio.h>
main()
{
	int a[5],i,esum=0,osum=0;
	printf("\nenter the 5 elements");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			esum=esum+a[i];
		}
		else
		{
		osum=osum+a[i];
		}
	}
	 printf("\nesum is:%d",esum);
	 printf("\n osum is :%d",osum);
}
