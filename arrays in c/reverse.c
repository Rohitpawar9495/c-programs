#include<stdio.h>
main()
{
	int a[5],i;
	printf("\n enter the array");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n reverse no is:");
	for(i=4;i>=0;i--)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
}
