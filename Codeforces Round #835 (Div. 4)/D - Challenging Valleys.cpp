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
        cin>>n;
        int a[n],b[n];
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        vector<int>v;
        v.push_back(a[0]);
        int m = 0;
        for(int i= 1;i < n;i++)
        {
            if(v[m] != a[i])
            {
                //cout<<v[m]<<" "<<a[i]<<" "<<i<<endl;
                v.push_back(a[i]);
                m++;

            }
        }
        int sum = 0;
        if(m == 0||m==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(v[0] < v[1])
        {
            sum++;
        }
        if(v[m] < v[m-1])
        {
            sum++;
        }
        for(int i = 0;i < m;i++)
        {
            //cout<<v[i]<<" ";
        }
        //cout<<endl;
        for(int i = 1;i <= m-1;i++)
        {
            if(v[i-1] > v[i]&&v[i+1] > v[i])
            {
                sum++;
            }
        }
        if(sum == 1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
