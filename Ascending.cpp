#include <bits/stdc++.h>
using namespace std;
int a[11000],n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int l=0,r=n-1,mid,t=5,ans=-1;
    while(l<=r&&ans==-1){
        mid=(l+r)/2;
        if(a[mid]==t){
            ans=mid;
        }
        else if(a[mid]>t){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<ans<<"\n";
    return 0;
}
