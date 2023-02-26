//push
#include<stdio.h>

int a[5],top=-1,size=5;
void push(int );//prototype
int pop();
void display();

int main()
{ int n,ch;
  char get;


  while(get!=27)
  { printf("Choice: \n 1.push \n 2.pop \n 3.display \n" );

   printf("Enter the choice \n");
   scanf("%d",&ch);
  switch(ch)
  {
   //push
   case 1: printf("Enter the element \n");
	   scanf("%d",&n);
	   push(n);
	   break;
   //pop

   case 2:pop();
		 break;
   //display
   case 3:
	  display();
	  break;
   default: printf("you are input wrong choice \n");

    }
    get=getch();
     }

 return 0;
}

void push(int n)
{

 if(top==size-1)
  printf("Stack is overflow");
 else
 { top++;
   a[top]=n;

 }
}


int pop()
{
 if(top==-1)
  printf("Stack is underflow");
  else
  top--;
  return top;
}

void display()
{ int i;
  printf("Your stack element are \n");
  for(i=0;i<=top;i++)
  printf("%d \n",a[i]);

}