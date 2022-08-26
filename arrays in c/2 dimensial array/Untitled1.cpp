#include<stdio.h>
struct laptop
{
	int id;
	char name[10];
	int price;
};
main()
{
	struct laptop lap[5];
	int i;
	for(i=0;i<2;i++)
	{
		printf("\n enter laptop id");
		scanf("%d",&lap[i].id);
		
		printf("\n enter laptop name");
		scanf("%s",&lap[i].name);
		
		printf("\n enter laptop price");
		scanf("%d",&lap[i].price);
	}
	printf("\n laptop id\tlaptop name\tlaptop price");
	for(i=0;i<2;i++)
	{
		printf("\n%d\t\t%s\t\t%d",lap[i].id,lap[i].name,lap[i].price);
	}
}
