
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
	unsigned n;
	cin>>n;
    bin(n); 
    return 0; 
} 
