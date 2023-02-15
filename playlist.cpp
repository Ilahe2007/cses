#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	vector<ll>v(n);
	set<ll>s;
	for (ll &i:v)  cin>>i;
	ll l=0,r=0,c=0;
	for (ll r=0;r<n;r++){
		while (l<=r && s.count(v[r])==1){
			s.erase(v[l]);
			l++;
		}s.insert(v[r]);
		c=max(c,r-l+1);
	}cout<<c<<endl;
}
