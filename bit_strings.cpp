#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
ll f(ll a,ll b,ll m){
	if (b==0){
		return 1;
	}ll d=f(a,b/2,m);
	if (b%2==0){
		return d*d%m;
	}else{
		return d*d*a%m;
	}
}
 
int main(){
	ll n;
	cin>>n;
	cout<<f(2,n,(1e+9)+7)<<endl;		
}
