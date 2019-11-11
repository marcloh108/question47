#include <stdio.h>
#include <stdlib.h>

int test(int array[], int size)
 {
  int i;
  for( i=0; i<size; i++)
   {
       printf("%d ", array[i]);
   }
 }

int main(void)
{
    int new_array_size = 6;
    int array_size1, array_size2;
    int nums1[] = {10, 20, 30};
    int nums2[] = {40, 50, 60};
    array_size1 = sizeof(nums1)/sizeof(nums1[0]);
    array_size2 = sizeof(nums2)/sizeof(nums2[0]);
    printf("Elements in original array1 are: ");
    test(nums1, array_size1);
    printf("\n");
    printf("Elements in original array2 are: ");
    test(nums2, array_size2);
    printf("\n");
    int result[] = { nums1[0], nums1[1], nums1[2], nums2[0], nums2[1], nums2[2] };
    printf("New array: ");
    test(nums1, array_size1);
    test(nums2, array_size2);
 }

