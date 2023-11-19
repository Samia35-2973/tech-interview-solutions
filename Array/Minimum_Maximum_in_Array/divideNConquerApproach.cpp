#include <bits/stdc++.h>
#define ll long long
using namespace std;

pair<ll,ll> divideNConquer(ll a[], ll l, ll r){
	// Base conditions
	//for one element
	if(l==r) return {a[l], a[r]};
	
	//for two elements
	if(l+1==r){
		if(a[l]>a[r]) return {a[r], a[l]};
		else return {a[l], a[r]};
	}

	//dividing
	ll mid = l + (r-l)/2;
	pair<ll,ll> left_part = divideNConquer(a, l, mid);
	pair<ll,ll> right_part = divideNConquer(a, mid+1, r);

	//conquering
	ll mn, mx;
	//checking condition for minimum
	if(left_part.first < right_part.first) mn = left_part.first;
	else mn = right_part.first;
	//checking condition for maximum
	if(left_part.second < right_part.second) mx = right_part.second;
	else mx = left_part.second;

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

    pair<ll, ll> pp = divideNConquer(a, 0, n-1);

    cout << pp.first << " " << pp.second << endl;
  }
  return 0;
}