
#include<bits/stdc++.h> 
using namespace std; 

void bin(unsigned n) 
{ 
    if (n > 1) 
    bin(n>>1); 
      
    printf("%d", n & 1); 
} 
   
int main(void) 
{ 
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
	unsigned n;
	cin>>n;
	cout<<n<< ": ";
    bin(n);
    cout<<endl;
   	}

    #ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif 
    return 0; 
} 
