#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	// setting min and max default value
	ll n, mn = INT_MAX, mx = INT_MIN;

	//input
	cin >> n;
	vector<ll> v(n);
	for(ll i=0;i<n;i++) cin >> v[i];

	//linear search
	for(ll i=0;i<n;i++){
		mn = min(mn, v[i]);
		mx = max(mx, v[i]);
	}

	//Output
	cout << "Minimum element is " << mn << '\n';
	cout << "Maximum element is " << mx << '\n';
}