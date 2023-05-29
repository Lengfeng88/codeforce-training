#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxm=1e5+5;
int stk[maxm],head;//?
int ans[maxm];
int a[maxm];
int n;
int ask(int x){//???x??????
    int l=1,r=head;
    int res=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[stk[mid]]<a[x]){
            res=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return stk[res];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=n;i>=1;i--){//?????
        if(head==0||a[i]<=a[stk[head]]){//?????????????,???????
            ans[i]=-1;
            stk[++head]=i;//??
        }else{
            ans[i]=ask(i)-i-1;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}
