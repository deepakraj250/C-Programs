/* Program to implement doubly linked list
   Input: 
   Output: 
   Date: 10/10/2012
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct intnode 
{
  int element;
  struct intnode *next, *previous;
}intnode;

intnode *createList(int);

void main()
{
  intnode *firstnode;

  int size;

  printf("Enter number of nodes: ");
  scanf("%d", &size);

  firstnode = createList(size);
}

//Function to create doubly linked list
intnode *createList(size)
{
  intnode *firstnode, *lastnode, *intermediatenode, *temp;

  firstnode = (intnode *) malloc(sizeof(intnode));
  printf("\nenter first node: ");
  scanf("%d", &(firstnode->element));

  firstnode->previous = NULL;
  firstnode->next = NULL;

  lastnode = firstnode;
  temp = firstnode;

  for(i=0;i<size-1;i++)
  {
    intermedaiatenode = (intnode *) malloc(sizeof(intnode));
    scanf("%d", &(intermediatenode->element));
   
    intermediatenode->previous = temp;
    intermediatenode->next = NULL;
  }


}
