#include<stdio.h>
void swap(int &x , int &y)//not work call by refence in c language
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a,b;
	a=10;
	b=20;
	swap(a,b);
	printf("%d %d",a,b);
}
