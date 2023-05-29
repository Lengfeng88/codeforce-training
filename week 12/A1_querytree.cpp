#include<iostream>
#include<cstdio>
using namespace std;
int tree[1000001],a[1000001];
int n;
void buildtree(int l,int r,int u)
{
    if(l==r)
    {
        tree[u]=a[l];
        return ;
    }
    int mid=(l+r)>>1;
    buildtree(l,mid,u<<1);
    buildtree(mid+1,r,u<<1|1);
    tree[u]=min(tree[u<<1],tree[u<<1|1]);
}
int ans=-1;
void querytree(int l,int r,int index,int u,int k)
{
    if(l==r)
    {
        if(tree[u]<k){
            ans=l;
        }
        return ;
    }
    if(ans!=-1)
        return ;
    int mid=(l+r)>>1;
    if(tree[u<<1|1]<k)
    {
        querytree(mid+1,r,index,u<<1|1,k);
    }
    if(ans!=-1)
        return ;
    if(index<mid&&tree[u<<1]<k)
    {
        querytree(l,mid,index,u<<1,k);
    }
}
int main()
{

    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    buildtree(1,n,1);
    for(int i=1; i<=n; i++)
    {
        ans=-1;
        querytree(1,n,i,1,a[i]);
        printf("%d ",ans==-1?-1:ans-i-1);
    }
    printf("\n");
}

