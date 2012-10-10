/* Program to sort an array using Insertion Sort
   Input: numbers[]
   Output: Sorted numbers[] array
   Date: 5/10/2012
*/

#include<stdio.h>

void main()
{

  int i, j, number[50], length, temp, key;

  printf("Enter the size of array: "); // Enter length of array
  scanf("%d", &length);

  printf("Enter the array: \n"); // Enter array
  for(i=0;i<length;i++)
  {
    scanf("%d", &number[i]);
  }

  printf("The array is: \n"); // Print array
  for(i=0;i<length;i++)
  {
    printf("%d \t", number[i]);
  }
  printf("\n");
  
  // Insertion Sort
  for(i=1;i<length;i++)
  {
    key = number[i]; // choose key
    for(j=i-1;j>=0;j--)
    {
      temp = number[j]; // Store jth element in to a temperory variable
      if(number[j]>key) // check key greater than jth element
      {
        number[j] = key; // push elements to next position
        number[j+1] = temp;
      }
    }  
  }

  printf("The sorted array is: \n"); // Print sorted array
  for(i=0;i<length;i++)
  {
    printf("%d \t", number[i]);
  }
  printf("\n");

}
