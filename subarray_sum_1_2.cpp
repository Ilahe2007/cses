#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,x;
	cin>>n>>x;
	vector<ll>v(n+1);
	vector<ll>p(n+1,0);
	for (ll i=1;i<=n;i++){
		cin>>v[i];
		p[i]=p[i-1]+v[i];
	}ll res=0;
	map<ll,ll>mp;
	m[0]=1;
	for (ll j=1;j<=n;j++){
		ll a=p[j]-x;
		if (mp.count()){
			res+=mp[a];
		}mp[p[j]]++;
	}cout<<res<<endl;
}
