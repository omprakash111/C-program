#include<stdio.h>

struct rect
{
	int l;
	int b;
};

int main()
{
	
	
	struct rect *p=(struct rect *)malloc(sizeof(struct rect));
	
	p->l=20;
	p->b=15;
	(*p).l=20;
	printf("%d",(*p).l);
	
	printf("%d",p->l);
}

