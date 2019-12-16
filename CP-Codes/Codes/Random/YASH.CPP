#include<iostream.h>
#include<conio.h>
void merge(int a[5],int b[5])
{
int n=0,i=0,j=0;
int r[10];
while(a[i]!='\0'&&b[j]!='\0')
{
if(a[i]<b[j]){
r[n]=a[i];
i++;
 }
 else
 {
 r[n]=b[j];
 j++;
 }
n++;
}
while(a[i]!='\0')
{
r[n]=a[i];
i++;
n++;
}
while(b[j]!='\0')
{
r[n]=b[j];
n++;
j++;
}
for(int k=0;k<10;k++)
cout<<r[k]<<'\t';
}
void main()
{
int n=5,i;
int a[5],b[5];
cout<<"\n enter sorted arrays";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\n enter the second sorted array";
for(i=0;i<n;i++)
cin>>b[i];
merge(a,b);
getch();
}