#include<bits/stdc++.h>
using namespace std;
 
void f(long long n,char a,char b,char c){
	if (n==0){
		return ;
	}f(n-1,a,c,b);
	cout<<a<<" "<<c<<endl;
	f(n-1,b,a,c);
}
 
int  main(){
	long long n;
	cin>>n;
	cout<<pow(2,n)-1<<endl;
	f(n,'1','2','3');
	return 0;
}
