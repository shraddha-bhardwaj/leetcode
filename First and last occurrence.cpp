
#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int x, int tog){
    int l=0;
    int u=n-1;
    int ans=-1;
    while(l<=u){
        int mid=(l+u)/2;
        if(a[mid]<x){
            l=mid+1;
        }
        else if(a[mid]>x){
            u=mid-1;
        }
        else{
            ans=mid;
            if(tog==-1){
                u=mid+tog;
            }
            else{
                l=mid+tog;
            }
        }
    }
    return ans;
}
int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int indx1=solve(a,n,x,-1);
    int indx2=solve(a,n,x,1);
    if(indx1==-1) {cout<<"-1"<<endl;}
    else {
        cout<<indx1<<endl<<indx2;
    }
	return 0;
}
