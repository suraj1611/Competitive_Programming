#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        short int n,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",a[i]);
        short int q;
        scanf("%d",&q);
        while(q--)
        {
           short int l,r,p=0;int sum=0;
           scanf("%d%d",&l,&r);
           for(i=l-1;i<r;i++)
            {
                sum+=((pow(-1,p))*a[i]);
                p++;
            }
           printf("%d\n",sum);
        }
    }
}
