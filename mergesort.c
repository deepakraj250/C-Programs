/* Program to sort array using merge sort
   Input: number[50]
   Output: sorted array
   Date: 5/10/2012
*/

#include<stdio.h>

int mergeSort(int, int); // function to perform merge sorting

int number[10];

void main()
{
  
  int  i, size;

  printf("Enter number of elements: ");
  scanf("%d", &size); // get total number of elements from user

  printf("\nEnter elements: \n");
  for(i=0;i<size;i++) // get elements from user
  {
    scanf("%d", &number[i]);
  }

  printf("\nThe entered elements are: \n"); // display the unsorted list
  for(i=0;i<size;i++)
  {
    printf("%d \t", number[i]);
  }
  printf("\n");

  mergeSort(0, size-1); // do merge sort

  printf("The sorted list is: \n"); // print sorted list
  for(i=0;i<size;i++)
  {
    printf("%d \t", number[i]);
  }
  printf("\n");
}

// Function to perform merge sorting
int mergeSort(low, high)
{
  int i, pivot=0, left=0, right=0, length;

  length = high - low + 1; // size of sub array

  int subarray[length];

  if(low==high)  // check if completely divided
  {
    return 0;
  }

  pivot = (low + high) / 2; // choose pivot element

  mergeSort(low, pivot); // left subarray
  mergeSort(pivot+1, high); // right subarray

  for(i=0;i<length;i++) // Enter elements in to subarray
  {
    subarray[i] = number[i+low];
  }

  left = 0;
  right = pivot - low + 1;

  for(i=0;i<length;i++)
  {
    if(right <= high-low)
    {
      if(left <= pivot-low)
      {
        if(subarray[left] > subarray[right])
        {
          number[i+low] = subarray[right++];
        }
        else
        {
          number[i+low] = subarray[left++];
        }
      }
      else
      {
        number[i+low] = subarray[right++];
      }
    }
    else
    {
      number[i+low] = subarray[left++];
    }
  }
}
