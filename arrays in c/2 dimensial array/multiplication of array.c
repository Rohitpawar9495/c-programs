#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("enter a matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	  { 
		scanf("%d",&a[i][j]);
	  }
    } 
    printf("enter b matrix");
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	  { 
		scanf("%d",&b[i][j]);
	  }
    } 
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		c[i][j]=0;
    	   for(k=0;k<2;k++)
    	   {
		   
    	   c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	printf("multiplication of matrix is\n");
	 for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	  {
	  	printf("\t %d",c[i][j]);
	 }
	 printf("\n");
}
}

