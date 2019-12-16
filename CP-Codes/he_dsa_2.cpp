/* Code by : Suraj (@suraj1611) */

#include<bits/stdc++.h>
#include <string>

using namespace std;

#define ll int
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

int Merge(int arr[], int aux[], int low, int mid, int high)
{
	int k = low, i = low, j = mid + 1;
	int inversionCount = 0;
	
	// While there are elements in the left and right runs
	while (i <= mid && j <= high) 
	{
		if (arr[i] <= arr[j]) {
			aux[k++] = arr[i++];
		}
		else {
			aux[k++] = arr[j++];
			inversionCount += (mid - i + 1);	// NOTE
		}
	}

	// Copy remaining elements
	while (i <= mid)
		aux[k++] = arr[i++];

	// Don't need to copy second half

	// copy back to the original array to reflect sorted order
	for (int i = low; i <= high; i++)
		arr[i] = aux[i];
		
	return inversionCount;
}

// Sort array arr [low..high] using auxiliary array aux
int MergeSort(int arr[], int aux[], int low, int high)
{
	// Base case
	if (high == low)	// if run size == 1
		return 0;

	// find mid point
	int mid = (low + ((high - low) >> 1));
	int inversionCount = 0;
	
	// recursively split runs into two halves until run size == 1,
	// then merge them and return back up the call chain

	// split / merge left  half
	inversionCount += MergeSort(arr, aux, low, mid);

	// split / merge right half
	inversionCount += MergeSort(arr, aux, mid + 1, high);

	// merge the two half runs
	inversionCount += Merge(arr, aux, low, mid, high);

	return inversionCount;
}

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

int main()
{
	IOS
	
	#ifndef ONLINE_JUDGE   
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	ll a[n],b[n],c[n],d[n];
	rep(i,n)
	cin>>a[i];
	rep(i,n)
	cin>>b[i];
	std::vector< pair <ll,ll> > v;
	rep(i,n)
	{
		v.pb(mp(b[i],a[i]));
	}
	sort(v.begin(), v.end());
	ll ans=0;
	rep(i,n)
	{
		c[i]=v[i].S;
		d[i]=v[i].S;
	}
	cout<<MergeSort(c, d, 0, n - 1)<<endl;

	#ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif

    return 0;
}