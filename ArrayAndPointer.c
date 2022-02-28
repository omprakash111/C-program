#include<stdio.h>

void fun(int B[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",B[i]);
}
int main()
{
	int A[5]={2,3,5,6,7};
	int b=10;
	fun(&b,6);
	return 0;
}

