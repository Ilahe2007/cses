#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main(){
	ll n,m,k;
	cin>>n>>m>>k;
	vector<ll> a(n),b(m);
	for (auto &i:a) cin>>i;
	for (auto &i:b) cin>>i;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	ll i=0,j=0,res=0;
	while (i<n && j<m){
		if (a[i]-k<=b[j] && b[j]<=a[i]+k){
			res++;
			i++;
			j++;
		}else if (b[j]<a[i]-k){
			j++;
		}else{
			i++;
		}
	}cout<<res<<endl;
}
