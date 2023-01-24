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
        if(n == 3)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i = n / 2 + 1;i<= n;i++)
        {
            cout<<i<<" ";
        }
        for(int i = 1;i<= n/2;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
