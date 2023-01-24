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
        int a[n];
        int b[n];
        int c[n];
        for(int i = 0;i< n;i++)
        {
            cin>>a[i];
            b[i] = a[i];
            c[i] = a[i];
        }
        long long result = 0;
        int num1 = 0;
        for(int i = 0;i < n;i++)
        {
            if(a[i] == 1)
            {
                num1++;
            }
            else{
                result += num1;
            }
        }
        long long result1 = 0;
        num1 = 0;
        for(int i = 0; i < n;i++)
        {
            if(b[i] == 0)
            {
                b[i] = 1;
                break;
            }
        }
        for(int i = 0;i < n;i++)
        {
            if(b[i] == 1)
            {
                num1++;
            }
            else{
                result1 += num1;
            }
        }
        long long result2 = 0;
        num1 = 0;
        for(int i = n-1; i >= 0;i--)
        {
            if(c[i] == 1)
            {
                c[i] = 0;
                break;
            }
        }
        for(int i = 0;i < n;i++)
        {
            if(c[i] == 1)
            {
                num1++;
            }
            else{
                result2 += num1;
            }
        }
        cout<<max(result,max(result1,result2))<<endl;
    }
    return 0;
}
