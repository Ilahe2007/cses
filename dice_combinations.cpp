#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,mod=1e9+7;
	cin>>n;
	vector<ll>dp(n+1);
	dp[0]=1;
	for (ll i=1;i<=n;i++){
		for (ll j=1;j<=6;j++){
			if (i-j>=0){
				dp[i]=(dp[i]+dp[i-j])%mod;	
			}
		}
	}cout<<dp[n]<<endl;
	return 0;
}
