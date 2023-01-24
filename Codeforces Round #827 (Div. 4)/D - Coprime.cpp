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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int>m;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            m[a[i]] = i+1;

        }
        int result = -1;
        for(int i = 1;i <= 1000;i++)
        {
            for(int j = 1;j <= 1000;j++)
            {
                if(m[i] != 0&&m[j] != 0&&__gcd(i,j) == 1)
                {
                    result= max(result,m[j] + m[i]);
                }
            }
        }


        cout<<result<<endl;
    }
    return 0;
}
