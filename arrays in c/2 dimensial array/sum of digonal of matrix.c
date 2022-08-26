#include<stdio.h>
main()
{
	int a[3][3],i,j,sdig=0,sndig=0;
	printf("enter the matrix");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			{
				sdig=sdig+a[i][j];
			}
		else
		{
			sndig=sndig+a[i][j];
		}
		}
	}   printf("\nsum of digonal is:%d",sdig);
		printf("\nsum of non digonal is:%d",sndig);
}

