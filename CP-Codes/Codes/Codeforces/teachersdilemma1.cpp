/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define mx INT_MAX
#define mn INT_MIN
#define md 1000000007
#define pb push_back
#define mp make_pair
#define pf printf
#define sc scanf
#define maxsize 1100005
#define lb cout<<endl;
#define F first
#define S second
#define print(i) cout<<i<<endl
#define print1(i,j) cout<<i<<" "<<j<<endl
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);


void initialize( int Arr[ ], int N)
{
    for(int i = 0;i<N;i++)
      {
		    Arr[ i ] = i ;
		    size[ i ] = 1;
   	  }
}

//finding root of an element
int root(int Arr[ ],int i)
    {
        while(Arr[ i ] != i)           //chase parent of current element until it reaches root
        {
         i = Arr[ i ];
        }
        return i;
    }


 /*modified union function where we connect the elements by changing the root of one of the elements*/

void weighted-union(int Arr[ ],int size[ ],int A,int B)
  {
        int root_A = root(A);
        int root_B = root(B);
        if(size[root_A] < size[root_B ])
        {
		    Arr[ root_A ] = Arr[root_B];
		    size[root_B] += size[root_A];
  		}
        else
        {
	    Arr[ root_B ] = Arr[root_A];
	    size[root_A] += size[root_B];
	    }

  }

//returns true if A and B are connected, else returns false 
     bool find( int Arr[ ], int A, int B)                           
    {
	    if(Arr[ A ] == Arr[ B ])
	    return true;
	    else
	    return false;   
    }

ll power(ll x, ll  y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
 

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	while(t--)
	{
		
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}

