#include<stdio.h>

struct rect 
{
	int l;
	int b;
};

int area(struct rect r1)
{
	return r1.l*r1.b;
}

int main()
{
	struct rect r={10,15};
	printf("%d",area(r));
	return 0;
}
