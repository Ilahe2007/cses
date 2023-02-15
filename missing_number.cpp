#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long n;
	cin>>n;
	long long a=n*(n+1)/2;
	long long c=0,b[n];
	for (long long i=0;i<n-1;i++){
		cin>>b[i];
		c+=b[i];
	}cout<<a-c;
}
