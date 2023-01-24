#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;
long long  fact(long long  n);
bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.second != b.second)
        return (a.second < b.second);
    else
       return (a.first > b.first);
}
long long  nCr(long long  n, long long  r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
bool sortbysec(const pair<long long ,long long > &a,
              const pair<long long ,long long > &b)
{
    return (a.second < b.second);
}
// Returns factorial of n
long long  fact(long long  n)
{
      if(n==0)
      return 1;
    long long  res = 1;
    for (long long  i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int  main()
{
    std::ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int sizea = 0;
        for(int i = 0;i < n;i++)
        {
            sizea = max(sizea,int(s[i] - 'a') + 1);
        }
        cout<<sizea<<endl;
    }
    return 0;
}
