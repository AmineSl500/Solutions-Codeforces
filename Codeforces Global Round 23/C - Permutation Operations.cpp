#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int result = 0;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        map<int,int>m;
        for(int i = 1;i < n;i++)
        {
            if(a[i] < a[i-1])
            {
                m[n - a[i]] = i+1;
            }
        }
        for(int i = 1;i <= n;i++)
        {
            if(m[i] == 0)
            {
                cout<<1<<" ";
            }
            else{
                cout<<m[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
