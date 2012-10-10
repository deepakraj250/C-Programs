/* Program to implement create and display Linked list
   Input: *firstnode, size
   Output: Linked list
   Date:7/12/2012 
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct intnode // structure to hold each node
{
  int element; // value
  struct intnode *next; // next node address
}intnode; 

intnode *createList(int); // function to create linked list
void printList(intnode *); // function to display linked list

void main()
{
  intnode *firstnode; // first node pointer variable
  int size;

  printf("Enter number of nodes: "); // get number of variables
  scanf("%d", &size);

  firstnode = createList(size); // call function to create linked list

  printList(firstnode); // call function to print the linked list
}

// Function to create linked list
intnode *createList(int size)
{
  intnode *firstnode, *lastnode, *intermediatenode;
  int i;
  
  firstnode = (intnode *) malloc(sizeof(intnode)); // gets the first node

  printf("Enter the first node: ");
  scanf("%d", &(firstnode->element)); // get first element from user

  firstnode->next = NULL; // sets next of p to null

  lastnode = firstnode;

  for(i=0;i<size-1;i++) // create intermediate nodes
  {
    intermediatenode = (intnode *) malloc(sizeof(intnode)); // allocate size for each node
    scanf("%d", (&intermediatenode->element)); // get value for the node
    intermediatenode->next = NULL; // points next address to null

    lastnode->next = intermediatenode; // assign the newly created node as last node
    lastnode = intermediatenode; 
  }
  return firstnode; // returns first node
}

// Function to display linked list
void printList(intnode *firstnode)
{
  intnode *temp;
  temp = firstnode;
  
  printf("\nThe Linked List is: \n");
  while(firstnode != NULL) // Print the list
  {
    printf("%d \t", firstnode->element);
    firstnode = firstnode->next;
  }
  printf("\n");

  firstnode = temp;
}
