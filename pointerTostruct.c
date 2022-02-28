#include<stdio.h>

struct rect
{
	int l;
	int b;
};

int main()
{
	struct rect r={10,6};
	
	struct rect *p=&r;
	
	r.l=20;
	(*p).l=20;
	printf("%d",(*p).l);
	
	printf("%d",p->l);
}

