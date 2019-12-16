    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long int
    ll r[10001],c[10001];
    string s[10001];
    void fastio(){
    	 ios_base::sync_with_stdio(false);
    	 cin.tie(0);
    	 cout.tie(0);
    }
    int main() {
    	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
    	fastio();
    	ll t,n,m,flag=0;
    	cin>>t;
    	while(t--)
    	{
    		flag=0;
    		cin>>n>>m;
    		for(int i=0;i<max(n,m);i++)
    		r[i]=0,c[i]=0;
    		for(int i=0;i<n;i++)
    		{
    			cin>>s[i];
    			for(int j=0;j<m;j++)
    			{
    				if(s[i][j]=='1')
    				{
    					flag=1;
    					r[i]=1;
    					c[j]=1;
    				}
    			}
    		}
    		for(int i=0;i<n;i++)
    		{
    			for(int j=0;j<m;j++)
    			{
    				if(!flag)
    				cout<<"-1 ";
    				else
    				if(s[i][j]=='1')
    				cout<<"0 ";
    				else
    				if(r[i]||c[j])
    				cout<<"1 ";
    				else
    				cout<<"2 ";
    			}
    			cout<<'\n';
    		}
    	}
     
    	return 0;
    } 