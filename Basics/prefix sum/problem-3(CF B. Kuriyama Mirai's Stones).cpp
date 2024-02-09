//https://codeforces.com/problemset/problem/433/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long v[n], u[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i] = x;
        u[i] = x;
    }
    sort(u, u+n);

    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
        u[i]+=u[i-1];
    }
    int t;cin>>t;
    while(t--){
        int q,l,r;
        cin>>q>>l>>r;
        l--;r--;

        if(q==1){
            if(l==0){
                cout<<v[r]<<endl;
            }
            else{
                cout<<v[r] - v[l-1]<<endl;
            }
        }
        if(q==2){
            if(l==0){
                cout<<u[r]<<endl;
            }
            else{
                cout<<u[r] - u[l-1]<<endl;
            }
        }
        
    }

    return 0;
}