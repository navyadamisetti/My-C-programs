#include <stdio.h>
int main()
{
	struct book
	{
		char name[10];
		int price;
	}b1[5];

	int i;
	for(i=0;i<3;i++)
	{
		scanf("%s%d",b1[i].name,&b1[i].price);

	}
		for(i=0;i<3;i++)
	{
		printf("%s  %d",b1[i].name,b1[i].price);

	}
}