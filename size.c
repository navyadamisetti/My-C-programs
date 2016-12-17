#include <stdio.h>
int main()
{
	int a[6]={0,1,2,3,4,5},i;
	for(i=0;i<6;i++)
	{
		printf("%d,  size of a[%d] is: %ld\n",a[i],i,sizeof(a[i]));
	}
	printf("size of the whole array: %ld\n",sizeof(a));
	return 0;
}