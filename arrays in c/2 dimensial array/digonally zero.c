#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("enter the matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix are\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  	if(i==j)
	  	{
	  	 a[i][j]=0;
		}
		printf("\t%d",a[i][j]);
		  }
		  printf("\n");	
	}
}
