#include <stdio.h>
int main()
{
	int i,a[6],sum;
	for(i=0;i<6;++i)
	{
		scanf("%d",(a+i));
		sum+=(a+i);
	}
	printf("sum = %d\n",sum );
	return 0;
}