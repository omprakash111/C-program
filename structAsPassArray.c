#include<stdio.h>

struct Test
{
	int A[5];
	int n;
};

void fun(struct Test t1 )
{
	t1.A[0]=55;
	t1.n=99;
	int i;
	for( i=0;i<5;i++)
	{
		printf("\n %d",t1.A[i]);
	}
}

int main()
{
	struct Test t={{33,54,76,43,87},5};
	fun(t);/*55     output
	         54
	         76
	         43
	         87
	         */
	
}
