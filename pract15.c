#include<stdio.h>
#include<string.h>
#include<assert.h>
void fun(char * s)
{
	char *str=malloc(strlen(s));
	assert(str);
	str[0]='h';
	str[1]=0;
	
	char t=str[1];
	printf("%s",str);
}
int main()
{
	char s[]="abcde";
	fun(s);
}
