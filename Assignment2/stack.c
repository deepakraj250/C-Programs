/* Program to implement stack operation
   Input: choice, element 
   Output: Stack operation according to the choice
   Date: 6/10/2012
*/

#include<stdio.h>
#define stack_max 10

int push(); // functionn to perform push operation in stack
int pop(); // function to perform pop operation in stack
void displayStack(); // function to display stack

int top=0, stack[stack_max]; // global variables

int main()
{
  int choice; 

  while(1)
  {
    printf("\nChoose an option: \n1. Add Element \n2. Delete Element \n3. Display Stack \n4. Exit \n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice==1)
    {    
      push(); // perform push operation
    }
    else if(choice==2)
    {     
      pop(); // perform pop operation   
    }
    else if(choice==3)
    {    
      displayStack(); // display stack
    }
    else if(choice==4)
    {
      return 0; // exit
    }
    else
    {
      printf("\n Enter correct choice: \n"); // invalid choice selection
    }
  }
}

int push()
{
  int element;

  if(top>=stack_max) // check stack is full or not
  {
    printf("Stack is full. Cannot add more elements \n");
    return 0; // exit
  }
  else
  {
    printf("\nEnter element to be Added: ");
    scanf("%d", &element); // get element to be pushed in to stack

    stack[top+1] = element; // element added to stack
    top++; // index pointing to top is incremented by 1

    printf("Element added succesfully \n");
  }
}

int pop()
{
  if(top==0) // check stack is empty or not
  {
    printf("\nStack is empty \n");     
  }
  else
  {
    printf("\n%d is popped out of the stack \n", stack[top]); // display popped element

    top--; // index pointing to top is decremented by 1
  }
}   

void displayStack()
{
  int i;
  
  if(top==0) // check stack is empty or not
  {
    printf("\nThe stack is empty \n");
  }
  else
  {
    printf("\nThe stack is: \n");  
    for(i=top;i>0;i--) // display stack
    {
      printf("%d \n", stack[i]);
    }
    printf("--------\n");
  }
}
