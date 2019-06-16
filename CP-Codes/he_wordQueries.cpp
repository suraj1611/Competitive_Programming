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
#define maxsize 1100005
#define lb cout<<endl;
#define endl "\n"
#define F first
#define S second
#define label cout<<"hello!"<<endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

ll power(ll x, ll  y) 
{ 
	ll m=md;
   	ll ans=1;
    while (y > 0) 
    {
        if (y & 1)
            ans = (ans * x) % m;
        x = (x * x) % m;
        y >>= 1;
    }
    return ans;
}

struct trie
{
 	unordered_map <char , trie*> child;
 	bool isleaf;
 	ll count;
}; 

trie *new_node() 
{
	trie *n = new trie;
	n->isleaf = false;
	n->count =0;
	return n;
}

void insert(trie *root, string s)
{
	trie *cur = root;
	ll n=s.length();
	rep(i,n)
	{
		if(cur->child.find(s[i]) == cur->child.end())
			cur->child[s[i]] = new_node();
		cur = cur->child[s[i]];
		cur->count++;
	}
	cur->isleaf = true;
}

ll search(trie *root , string s)
{
	ll n=s.length();
	trie *cur = root;

	rep(i,n)
	{
		if(cur->child.find(s[i]) == cur->child.end())
			return 0;
		cur = cur->child[s[i]];
	}

	return cur->count;
}


int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n,q;
	cin>>n>>q;
	trie *root = new_node();
	string s;
	while(n--)
	{
		cin>>s;
		insert(root,s);
	}

	while(q--)
	{
		cin>>s;
		cout<<search(root,s)<<endl;
	}

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}