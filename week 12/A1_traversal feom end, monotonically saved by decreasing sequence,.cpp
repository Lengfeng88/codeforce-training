//traversal feom end, monotonically saved by decreasing sequence, binary search
#include<algorithm>
#include<string.h>
#include<stdio.h>
#define M 100010
using namespace std;
int a[M],tail,ans[M];
struct node
{
    int x,i;
};
node q[M];
int erfen(int x)
{
    int l=0,r=tail,pan;
    while(r>=l)
    {
        pan=(r+l)/2;
        if(x>q[pan].x)
        {
            r=pan-1;
        }
        else
        {
            l=pan+1;
        }
    }
    return l;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        tail=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=n;i>0;i--)
        {
            if(tail==0||q[tail-1].x>=a[i])
            {
                q[tail].x=a[i];
                q[tail++].i=i;
                ans[i]=-1;
            }
            else
            {
                int j=erfen(a[i]);
                ans[i]=q[j].i-i-1;
            }
        }
        for(int i=1;i<n;i++)
        {
            printf("%d ",ans[i]);
        }printf("%d\n",ans[n]);
    }
}