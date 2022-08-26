#include<stdio.h>
main()
{
	int a[5],i;
	printf("\n enter array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}
