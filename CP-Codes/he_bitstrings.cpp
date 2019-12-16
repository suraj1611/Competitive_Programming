/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define mod 1000000007
#define lb cout<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);


int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

			int n;
            cin>>n;
            string s;
            cin>>s;
            int  num=0;
            int ans[101];
            for(int j=1;j<=100;j++){
            int dd=mod*j;
            num=0;
            for(int i=0;i<n;i++){
                num=num*2+(s[i]=='1');
                num+=dd;
                num%=dd;
            }
            ans[j]=(num/(j))+1;
            ans[j]+=mod;
            ans[j]%=mod;
 
            }
 
            int query;
            int q;
            cin>>q;
            while(q--){
                cin>>query;
                cout<<ans[query]%mod<<endl;
            }

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}