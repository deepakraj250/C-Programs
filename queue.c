/* Program to implement Queue operation
   Input: choice, element
   Output: Queue operation correcponding to the choice enetered
   Date: 7/12/2012
*/

#include<stdio.h>
#define que_max 10

void addQueue(); // function to add element to queue
void deleteQueue(); // function to delete element from queue
void viewQueue(); // function to view queue

int que[que_max], front=0, rear=0; // global variables
int main()
{
  int choice;

  while(1)
  {
    printf("\nChoose an option \n1. Add Element \n2. Delete Element \n3. View Queue \n4. Exit \n");

    printf("Enter your choice: ");
    scanf("%d", &choice); // get choice from user

    if(choice==1)
    {
      addQueue(); // if choice 1 then call addQueue function
    }
    else if(choice==2)
    {
      deleteQueue(); // if choice 2 then call deleteQueue function
    }
    else if(choice==3)
    {
      viewQueue(); // if choice 3 then call viewQueue function
    }
    else if(choice==4)
    {
      return 0; // if choice 4 then exit
    }
    else
    {
      printf("\nEnter valid choice \n"); // invalid choice
    }
  }
}

// Function to add element to Queue
void addQueue()
{
  int element;

  if(rear==que_max) // if end points to maximum elements
  {
    printf("Queue is full. Cannot add more elements. \n");
  }
  else
  {
    printf("\nEnter element to be added: ");
    scanf("%d", &element); // get element to be added from user

    que[rear+1]=element; // add element to the end of Queue
    rear++; // increment the index pointing to last by 1

    if(front==0) // if first element
    {
      front++; // incrment index pointing to start by 1
    }

    printf("\nElement added to Queue \n");
  }
}

// Function to view stack
void viewQueue()
{
  int i;

  if(front==0) // if start index doesnot point to any element
  {
    printf("\nQueue is empty \n");
  }
  else
  {
    printf("\nThe Queue is: \n");
    for(i=front;i<=rear;i++) // display elements from element pointed by front to rear
    {
      printf("%d \t",que[i]);
    }
    printf("\n");
  }
}

// Function to delete element from Queue
void deleteQueue()
{
  if(front==0)
  {
    printf("\nQueue is empty \n");
    front=0;
    rear=0;
  }
  else
  {
    printf("\n%d is removed from Queue \n", que[front]);

    front++; // increment index pointinng to start element by 1

    if(front==rear+1) // if last element +1
    {
      front=0; // reset start index
      rear=0; // reset start index
    }
  }
}
