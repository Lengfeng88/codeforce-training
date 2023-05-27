#include<stdio.h>
#include<string>
#include<cstring>
#include<queue>
#include<algorithm>
#include<functional>
#include<vector>
#include<iomanip>
#include<math.h>
#include<iostream>
#include<sstream>
#include<stack>
#include<set>
#include<bitset>
using namespace std;
const int INF=0x3f3f3f3f;
const int MAX=1005;
const int MOD=1000000007;
int main()
{
    int N,B,A[MAX]={0};
    cin>>N;
    for (int i=1;i<=N;i++)
    {
        cin>>B;
        A[B]++;
    }
    int X=(N%2==0)?N/2:(N+1)/2;
    bool Ans=true;
    for (int i=1;i<=1000;i++)
    {
        if (A[i]>X)
        {
            Ans=false;
            break;
        }
    }
    if (Ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}