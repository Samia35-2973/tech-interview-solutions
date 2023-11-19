#include <bits/stdc++.h>
#define ll long long
using namespace std;

pair<ll,ll> pairwiseComparison(ll a[], ll n){
	// defining min, max and starting index variables
	ll mx, mn, ind;

	// for even value we are storing minimum and maximum from 1st 2 elements
	// for odd value we are storing the first element as both min and max
	if(n%2==0){
		mx = max(a[0], a[1]);
		mn = min(a[0], a[1]);
		ind = 2;
	}
	else{
		mx = a[0];
		mn = a[0];
		ind = 1;
	}

	//for the remaining elements we compare and store min and max by taking pair everytime
	for(ll i=ind;i<n-1;i+=2){
		mx = max({mx, a[i], a[i+1]});
		mn = min({mn, a[i], a[i+1]});
	}
	return {mn, mx};
}

int main(){
	int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    pair<ll, ll> pp = pairwiseComparison(a, n);

    cout << pp.first << " " << pp.second << endl;
  }
  return 0;
}