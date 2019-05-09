#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a,ans=0;
    cin>>l>>r>>a;
    while(a>0)
          {
            if(l<r)
                {
                    l++;
                    a--;
                }
            else if(l>r)
            {
                r++;
                a--;
            }
            else
                break;
          }
    if(l!=r)
        ans=min(l,r)*2;
    else
        ans=(l*2)+((a/2)*2);
    cout<<ans<<endl;
}
