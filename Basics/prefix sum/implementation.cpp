#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[] = {10, 4, 16, 20, 9, 1};
    int n = end(arr)-begin(arr);

    int pre[n];
    pre[0]=arr[0];

    for(int i=1;i<n;i++){
      pre[i]=pre[i-1]+arr[i];
    }

    int q;
    cin>>q;
    while(q--){
      int l,r,sum;
      cin>>l>>r;

      if(l==0){
        sum = pre[r];
      }
      else {
        sum = pre[r] - pre[l-1];
      }
      cout<<sum<<endl;
    }
    
  return 0;
}