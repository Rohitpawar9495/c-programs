#include<stdio.h>
main()
{
	int marks[5],sum=0,avg=0;
	printf("enter the 5 subject marks");
	for (i=1;i<=5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=1;i<4;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("\n sum:%d",sum);
	printf("\n avg:%d",avg);
}
