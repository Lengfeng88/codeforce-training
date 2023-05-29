#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxm=1e5+5;
int stk[maxm],head;//栈
int ans[maxm];
int a[maxm];
int n;
int ask(int x){//找出比x小的最大下标
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
    for(int i=n;i>=1;i--){//栈顶最小值
        if(head==0||a[i]<=a[stk[head]]){//如果栈为空或者小于等于栈顶，说明没有更小的
            ans[i]=-1;
            stk[++head]=i;//入栈
        }else{
            ans[i]=ask(i)-i-1;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}
