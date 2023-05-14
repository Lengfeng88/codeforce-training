//https://blog.csdn.net/Hpuer_Random/article/details/85620599?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522168408080016800184197234%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&request_id=168408080016800184197234&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v1~rank_v31_ecpm-5-85620599-null-null.142^v87^control_2,239^v2^insert_chatgpt&utm_term=C.%20Powers%20Of%20Two&spm=1018.2226.3001.4187

#include<bits/stdc++.h>
// #define SUBMIT
using namespace std;
typedef long long ll;
int main()
{
    #ifdef SUBMIT
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
        ll _begin_time = clock();
    #endif

    int n,k;
    multiset<int> s;
    cin>>n>>k;
    int m = n;
    for(int i=0;m;m>>=1,i++)    if(m&1) s.insert(1<<i);
    // for(multiset<int>::iterator it=s.begin();it!=s.end();++it)
    //     cout<<*it<<" ";
    // cout<<endl;
    if(n<k||s.size()>k)  cout<<"NO"<<endl;
    else
    {
        while(s.size()<k)
        {
            int a = *(--s.end()); s.erase(--s.end());
            if(a==1)    break;
            s.insert(a/2);
            s.insert(a/2);
        }
        cout<<"YES"<<endl;
        while(s.size())
        {
            cout<<*s.begin()<<" ";
            s.erase(s.begin());
        }
        cout<<endl;
    }
    #ifdef SUBMIT
        ll _end_time = clock();
        printf("Time: %I64d ms\n",_end_time - _begin_time);
    #endif
    return 0;
}

