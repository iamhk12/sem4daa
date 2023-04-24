#include <stdio.h>
#include <stdbool.h>

void main()
{

   int n;
   bool elementFound = false;
   printf("Enter the size of the sorted array : ");
   scanf("%d", &n);
   int array[n];
   int target, i;
   printf("Enter  the elements\n");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &array[i]);
   }
   printf("Enter the target\n");
   scanf("%d", &target);

   int start = 0;
   int end = sizeof(array) / sizeof(array[0]) - 1;
   while (start <= end)
   {
      int mid = start + end / 2;
      if (array[mid] == target)
      {
         printf("Element found at index %d", mid);
         elementFound = true;
         break;
      }
      else if (array[mid] < target)
      {
         start = mid + 1;
      }
      else if (array[mid] > target)
      {
         end = mid - 1;
      }
   }

   if (!elementFound)
      printf("Element not present in array");
}
