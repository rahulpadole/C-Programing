#include<stdio.h>
 
int main()
{
 int a[100],i,j,n,swap,position;
 printf("Enter the size of array");
 scanf("%d",&n);
 printf("Enter %d numbers ",n);
 for(i=0;i<n;++i){
 	scanf("%d",&a[i]);
 }
    for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (a[position] > a[j])
            position = j;
      }
      if (position != i) {
         swap = a[i];
         a[i] = a[position];
         a[position] = swap;
      }
   }
   printf("Sorted array is: ");
   for (i = 0; i < n; i++)
      printf("%d ", a[i]);
   return 0;
}
