#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long n;
	cin>>n;
	set<long long>s;
	long long a[n];
	for (long long i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}cout<<s.size()<<endl;
}
