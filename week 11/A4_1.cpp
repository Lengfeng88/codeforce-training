#include <iostream>
using namespace std;
 
int main()
{
    int n,x,maxn=0,index[1001]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        index[x]++;
        if(maxn<index[x]) maxn=index[x];
    }
    if(maxn<=(n+1)/2) cout<<"YES";
    else cout<<"NO";
}