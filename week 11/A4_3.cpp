#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
 
int main() 
{
	int n,a[1001],i,temp;
	int max;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	max=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		a[temp]++;
		if(a[temp]>max)
		{
			max=a[temp];
		}
	}
	if(max>(n+1)/2)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;
}