#include<stdio.h>
main()
{
	int a[5],i,j,p;
   printf("enter the 5 elements");
   for (i=0;i<5;i++)
   {
   	scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
   	for(j=0;j<5;j++)
   	{
   		if (a[i]>a[j])
   		{
   			p=a[i];
   			a[i]=a[j];
   			a[j]=p;
		   }
	   }
   }
   for(i=0;i<5;i++)
   {
   	printf("\n%d",a[i]);
   }
}
