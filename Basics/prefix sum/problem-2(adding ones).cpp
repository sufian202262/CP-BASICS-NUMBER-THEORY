#include<bits/stdc++.h>
using namespace std;

int main(){
    const int n  = 3 , k = 4;

    int arr[n] = {0};
    int updates[k] = {1, 1, 2, 3};

    for(int i = 0;i < k; i++){
        int x = updates[i]-1;
        arr[x]++;
    }
    for(int i = 1; i < n; i++){
        arr[i]+=arr[i-1];
    }
    
    for(auto &x : arr){
        cout<<x<<" "; 
    }

    return 0;
}