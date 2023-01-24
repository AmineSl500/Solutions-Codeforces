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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        int done=  0;
        for(int i = 0;i < n;i++)
        {
            if(a[i] == 1)
            {
                done = 1;
            }
        }
        if(done)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
