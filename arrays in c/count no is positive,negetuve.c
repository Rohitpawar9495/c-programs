#include<stdio.h>
main()
{
   int a[5],i,cnt1=0,cnt2=0,cnt3=0;
	printf("enter the elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
    {
		
	    if(a[i]==0){
	    	cnt1++;
		}
		
		else if(a[i]>0){
			cnt2++;
		}
		
		else if(a[i]<0){
			cnt3++;
		}
		
	}
	printf("\nno is zero%d",cnt1);
	printf("\nno of +ve:%d",cnt2);
	printf("\nno of -ve:%d",cnt3);
}
