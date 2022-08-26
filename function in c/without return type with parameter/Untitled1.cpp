#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
main()
{
	int a,b;
	printf("\n enter a and b");
    scanf("%d%d",&a,&b);
	add(a,b);
	sub(a,b);	
}
void add(int a,int b)
{
    int c;
	c=a+b;
	printf("\n addition is %d",c);	
}
void sub (int a,int b)
{
    int c;
	c=a-b;
	printf("\n substraction is %d",c);	
}
