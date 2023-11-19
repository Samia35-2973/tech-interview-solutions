#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	//input
	ll n;
	cin >> n;
	vector<ll> v(n);
	for(ll i=0;i<n;i++) cin >> v[i];
	
	//Ascending sort
	sort(v.begin(), v.end());
	
	//output first and last element
	cout << "Minimum element is " << v[0] << '\n';
	cout << "Maximum element is " << v[n-1] << '\n';
}
