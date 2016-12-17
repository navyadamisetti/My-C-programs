#include <stdio.h>
int main()
{
	int a=10,*p,**q;
	
	p=&a;
	q=&p;
	printf("%d  %d  %d",p,*p,**q);
	return 0;
}