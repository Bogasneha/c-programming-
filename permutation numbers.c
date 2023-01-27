#include <stdio.h>
void swap (int *i, int *j) 
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void permute(int index, int* arr, int n) 
{
	int k,i;
   if (index == n-1) 
   {
       for ( k = 0; k < n; ++k) 
	   {
            printf ("%d ", arr[k]);
       }
       printf ("\n");
       return;
   }
   for (i = index; i < n; i++) 
   {
       swap (arr + index, arr + i);
       permute (index+1, arr, n);
       swap (arr + i, arr + index);
   }
   return;
}

int main()
{
   int n,i,arr[10];
   printf("enter the number");
   scanf("%d",&n);
   for (i = 0; i < n; ++i) 
   arr[i] = i+1;
   permute(0, arr, n);
   return 0;
}
