#include <bits/stdc++.h>
using namespace std;



int x, n, m;

int solve(){
	cin >> x >> n >> m;
	int ti = n * 60 + m;
	for(int i=0;;i++){
		int h = ti / 60, m = ti % 60;
		if(h / 10 == 7 || h % 10 == 7 || m / 10 == 7 || m % 10 == 7)
		 	return cout << i << endl, 0;
		ti = (ti - x ) ;
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(0);
	// int t; cin >> t; while(t--)
	solve();
	// cout << (solve() ? "YES" : "NO") << endl;
	return 0;
}
