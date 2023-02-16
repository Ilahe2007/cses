# include <bits/stdc++.h>
using namespace std;
# define ll long long

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	int n,x;
	cin>>n>>x;
	vector <pair<int,int>> a(n);
	for(ll i=0;i<n;i++) {
		cin>>a[i].first;
		a[i].second=i+1;
	}sort(a.begin(),a.end());
	for (int l=0,r=n-1;l<r;){
		int s=a[l].first+a[r].first;
		if(s==x){
			cout<<a[l].second<<' '<<a[r].second<<'\n';
			return 0;
		}
		if (s<x) l++;
		else r--;
	}
	cout<<"IMPOSSIBLE\n";
	return 0;
}
