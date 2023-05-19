#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
#define MAX_Length 105
char Name[MAX_Length];
 
int Getmin(int a,int b)
{
    return a>b? b:a;
}
int main()
{
    while(cin>>Name)
    {
        char Index='a';
        int Time=0;
        int len=strlen(Name);
        for(int i=0;i<len;i++)
        {
            int Distant=fabs(Index-Name[i]);
            Time+=Getmin(Distant,26-Distant);
            //acout<<Time<<endl;
            Index=Name[i];          //?????????????
        }
 
        cout<<Time<<endl;
    }
    return 0;
}