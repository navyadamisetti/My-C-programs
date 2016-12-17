#include<stdio.h>
int sum(int n1, int n2, int n3)
{
	int res;
	res= n1+n2+n3;
	return res;
}

int main()
{
	int a=10,b=20,c=5,s;
	s=sum(a,b,c);
	printf("%d",s);
	return 0;
}