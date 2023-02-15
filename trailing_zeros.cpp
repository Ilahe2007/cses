#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long n,m=5,c=0;
	cin>>n;
	while (n>=m){
		c+=n/m;
		m*=5;
	}cout<<c<<endl;
}
