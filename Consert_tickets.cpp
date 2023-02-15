#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    multiset<int>ms;
    int n, m, h, t;
    cin>>n>>m;
    for(int i = 1; i <= n; i++){
        cin>>h;
        ms.insert(h);
    }
    while(m--){
        cin>>t;
        if(ms.size() == 0){
            cout<<-1<<endl;
            continue;
        }
        auto i = ms.lower_bound(t);
        if(i != ms.end() && *i == t){
            cout<<*i<<endl;
            ms.erase(i);
        }
        else{
            if(i == ms.begin()){
                cout<<-1<<endl;
            }
            else{
                i--;
                cout<<*i<<endl;
                ms.erase(i);
            }
        }
    }
