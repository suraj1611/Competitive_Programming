#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int cnt = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i]<=a[i-1])
            continue;
        else
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
