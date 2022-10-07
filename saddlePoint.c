#include <stdio.h>
   int main()
{
  int a[10][10], i, j, num;
  int sm, p, large, f = 1;
  printf("Enter Size of Matrix :\n");
  scanf("%d", & num);
  printf("Enter Matrix Elements :\n");
 for (i = 0; i < num; i++)
  {
    for (j = 0; j < num; j++)
   {
     scanf("%d", & a[i][j]);
   }
 }
   printf(" The Entered Matrix is :\n");
   for (i = 0; i < num; i++)
   {
    printf("\n");
    for (j = 0; j < num; j++)
     {
   printf("%d ", a[i][j]);
     }
   }
 //Compute Saddle Point
  for (i = 0; i < num; i++)
  {
   p = 0;
   sm = a[i][0];
  for (j = 0; j < num; j++)
  {
     if (sm > a[i][j])
   {
  sm =a[i][j];
  p = j;
   }
}
   large = 0;
   for ( j = 0; j < num; j++)
  {
    if (large < a[j][p])
   {
     large = a[j][p];
   }
 }
   if ( sm == large)
  {
    printf("\n The Saddle Point for the given Matrix is : %d\n", sm);
   f = 0;
   }
 }
 if (f > 0)
   printf( "\nNo Saddle Point ");
 return 0;
}
