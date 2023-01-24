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
        long long n,q;
        cin>>n>>q;
        long long a[n];
        long long k[q];
        for(long long i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        for(long long i = 0;i < q;i++)
        {
            cin>>k[i];
        }
        vector<long long>maxa;
        vector<long long>suma;
        maxa.resize(n);
        suma.resize(n);
        maxa[0] = (a[0]);
        suma[0] = (a[0]);
        for(long long i = 1;i < n;i++)
        {
            suma[i] = (a[i] + suma[i-1]);
            maxa[i] = (max(maxa[i-1],a[i]));
            //cout<<suma[i]<<" ";
        }
        for(long long i = 0;i < q;i++)
        {
            vector<long long>::iterator pos;
            pos = upper_bound(maxa.begin(), maxa.end(), k[i]);
            if(long(pos-maxa.begin()) != 0)
            {
            cout<<suma[long(pos-maxa.begin())-1]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
