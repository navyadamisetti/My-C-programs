#include <stdio.h>
	struct employee
	{
		int id;
		char name[10];

		struct date
		{
			int dd;
			int mm;
			int yyyy;
		}doj[5];
	}emp[5];
int main()
{

	int i;
	for(i=0;i<2;i++)
	{
		scanf("%d%s%d%d%d",&emp[i].id,emp[i].name,&emp[i].doj[i].dd,&emp[i].doj[i].mm,&emp[i].doj[i].yyyy);

	}
		for(i=0;i<2;i++)
	{
		printf("%d  %s  %d  %d  %d\n",emp[i].id,emp[i].name,emp[i].doj[i].dd,emp[i].doj[i].mm,emp[i].doj[i].yyyy);

	}
	return 0;
}