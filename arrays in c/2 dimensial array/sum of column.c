#include<stdio.h>
main()
{
	int a[3][3],i,j,sum=0;
	printf("enter the matrix");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
	printf("sum of matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
			printf("\t%d",sum);
			printf("\n");sum=0;
	}
}
