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
        int b[n];
        int result = 0;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        for(int i = 0;i < n;i++)
        {
            if(a[i] != b[i])
            {
                result++;
            }
        }
        cout<<result/2<<endl;
    }
    return 0;
}
