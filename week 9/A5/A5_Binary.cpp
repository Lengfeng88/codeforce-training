//https://blog.csdn.net/qq_21433411/article/details/85493682?ops_request_misc=&request_id=&biz_id=102&utm_term=C.%20Powers%20Of%20Two&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-1-85493682.142^v87^control_2,239^v2^insert_chatgpt&spm=1018.2226.3001.4187

#include<bits/stdc++.h>
using namespace std;
#define LL long long
const int mod=1000000007;

char a[35];
int b[35];

int main()
{
    int n, k, s=0;
    scanf("%d%d",&n,&k);
    if(k>n)
    {
        printf("NO\n");
        return 0;
    }
    for(int i=0;i<32;i++)
    {
        a[i]=((n>>i)&1)+'0';
    }
    for(int i=32;i>=0;i--)
    {
        if(a[i-1]=='1')
        {
            n=i-1;
            for(int j=i-1;j>=0;j--)
            {
                b[j]=a[j]-'0';
                s+=b[j];
            }
            break;
        }
    }
    if(k<s)
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        for(int i=n;i>=0;i--)
        {
            if(k>=s+b[i]&&i>0)
            {
                b[i-1]+=b[i]*2;
                s+=b[i];
                b[i]=0;

            }
            else if(k<s+b[i])
            {
                int m=k-s;
                b[i-1]+=2*m;
                b[i]-=m;
                break;
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
        for(int i=0;i<=n;i++)
        {
            while(b[i]--)
            {
                printf("%d ",(int)pow(2, i));
            }
        }
    }

    return 0;
