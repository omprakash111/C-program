#include<stdio.h>
#include<stdlib.h>
int a[5],top=-1,size=5;
void push(int );//prototype
void pop();
void display();

int main()
{ int n,ch;
  


  while(1)
  { printf("Choice: \n 1.push \n 2.pop \n 3.display \n 4.exit" );

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
   case 4: exit(0);
   
   default: printf("you are input wrong choice \n");
   break;

    }
     
     }

 return 0;
}

//push
void push(int n)
{

 if(top==size-1)
  printf("Stack is overflow \n");
 else
 { top++;
   a[top]=n;

 }
}

//pop
void pop()
{
 if(top==-1)
  printf("Stack is underflow \n");
  else  
  printf("Deleted element is %d",a[top--]);
  
}

//display
void display()
{ int i;
  printf("Your stack element are \n");
  for(i=top;i>=0;i--)
  printf("%d \n",a[i]);

}

