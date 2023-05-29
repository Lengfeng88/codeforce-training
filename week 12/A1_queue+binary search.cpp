#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int arr[1000001],ans[1000001];
#define pairs pair<int,int>
pairs q[1000001];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int h=1,t=0;
    for(int i=n;i>=1;i--)
    {
        pairs k=make_pair(arr[i],i);
        if(h>t||(h<=t&&q[t].first>=arr[i]))        {
            ans[i]=-1;
            q[++t]=k;
        }
        else//二分查找单调队列中第一个小于arr[i]的值的索引值
        {
           int l=1,r=t+1;
           while(l<r)
           {
               int mid=(l+r)>>1;
               if(q[mid].first<arr[i])
               {
                   r=mid;
               }
               else l=mid+1;
           }
           ans[i]=q[r].second-i-1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",ans[i]);
    }
    printf("\n");
}

