#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long n,x;
	cin>>n>>x;
	long long a[n];
	for (long long i=0;i<n;i++){
		cin>>a[i];
	}sort(a,a+n);
	long long l=0,r=n-1,c=0;
	while (l<=r){
		if (a[l]+a[r]<=x){
			c++;
			l++;
			r--;
		}else{
			r--;
			c++;
		}
	}cout<<c<<endl;
}
