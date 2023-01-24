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
        for(int i = 0;i < n;i ++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int done = 0;
        for(int i = 1;i < n;i++)
        {
            if(a[i-1]>= a[i])
            {
                done = 1;
            }
        }
        if(done)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
