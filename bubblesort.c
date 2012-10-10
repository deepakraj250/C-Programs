/* Program to sort an array of numbers using bubble sort
   Input: numbers[]
   Output: sorted array numbers[]
   Date: 5/10/2012
*/

#include<stdio.h>

void main()
{
  
  int i, j, temp, numbers[50], length, count=1;
  
  printf("Enter size of array: "); // Enter number of elements in array
  scanf("%d", &length);

  printf("Enter Array: \n"); // Enter the array
  for(i=0;i<length;i++)
  {
    scanf("%d", &numbers[i]);
  }

  printf("The entered array is: \n"); // Print the array
  for(i=0;i<length;i++)
  {
    printf("%d \t", numbers[i]);
  }
  printf("\n");

  // Bubble sort  
  while(count!=0) 
  {
    count=0; // var to check whether if block is executed or not
    for(i=0;i<length-1;i++)
    {
      temp = numbers[i+1]; // next element is stored in to a temperory variable      
      if(numbers[i]>numbers[i+1]) // check current element and next element
      {
        numbers[i+1] = numbers[i]; // replace next element with current element
        numbers[i] = temp; // replace current element with next element stored in temperory variable
        count++; // number of times if block is executed
      }
      
    }    
  }

  printf("The sorted array is: \n"); // print the sorted array
  for(i=0;i<length;i++)
  {
    printf("%d \t", numbers[i]);
  }
  printf("\n"); 

}
