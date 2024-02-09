#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[] = {1, 3, 5, 2, 2};
    int n = sizeof(ar)/sizeof(ar[0]);
    int sum = 0;
    for(int i= 0 ;i < n; i++){
        sum += ar[i];
    }
    int leftsum=0,rightsum = 0, ans = 0;

    for(int i = 0; i < n; i++){
        rightsum = sum - leftsum - ar[i];
        if(leftsum == rightsum){
            ans = i+1;
            break;
        }
        else {
            leftsum +=ar[i];
        }
    }
    cout<<ans<<endl;
    
    return 0;
}