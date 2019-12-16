#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,k,n;
   printf("\nEnter the number ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       j=i;
       while(j<=n-1)
       {
        printf("  ");
        j++;
       }
       for(k=11;k>11-i;k--)
       {
          printf("%d ", k);
       }
       //k++;
       while(k<11)
       {
        printf("%d", k);
        k++;
       }
       printf("\n");
    }
    return 0;
}
