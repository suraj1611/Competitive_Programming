#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int push(int *a,int n);
int pop(int *a,int n);
int push(int *a,int n)
{
int m,p,i;
printf("\n enter the the number to be inserted ad place of insertion");
scanf("%d%d",&m,&p);
a=(int*)realloc(a,(++n)*sizeof(int));
for(i=n;i>=p;i--)
a[i]=a[i-1];
a[p-1]=m;
printf("\n after insertion\n");
for(i=0;i<n;i++)
printf("\t%d", a[i]);
return n;
}
int pop(int *a,int n)
{
int p,i,m=n;
if(n==0)
{
printf("\n underflow");
return (n-1);
}
printf("\n enter the point of deletion");
scanf("%d",&p);
for(i=p;i<n;i++)
a[i-1]=a[i];
a=(int*)realloc(a,(n-1)*sizeof(int));
printf("\n after deletion");
for(i=0;i<n-1;i++)
printf("\t%d",a[i]);
n=n-1;
if(n==0)
a=(int*)malloc(m*(sizeof(int)));
return n;
}
int main()
{
int *a;
int i,n,c=0;
printf("\n enter the number of array");
scanf("%d",&n);
a=(int*)malloc(n*(sizeof(int)));
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("\t%d",a[i]);
while(c!=3)
{
printf("\n enter 1 for insertion,2 for deletion and 3 for exit");
scanf("%d",&c);
if(c==1)
n=push(a,n);
if(c==2)
n=pop(a,n);
}
}
