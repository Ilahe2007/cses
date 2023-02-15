#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	vector<ll>v(n);
	for (ll &i:v)	cin>>i;
	multiset<ll>ms;
	for (ll &x:v){
		auto it=ms.upper_bound(x);
		if (it!=ms.end()){
			ms.erase(it);
		}ms.insert(x);
	}cout<<ms.size()<<endl;
}
