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
        int done = 0;
        int ops = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];

        }


        int sizebt = n;
        int level = 1;
        while(sizebt != 1)
        {
            int reduce[sizebt/2];
            for(int i = 0;i < sizebt;i+= 2)
            {
                if(a[i] > a[i+1])
                {
                    ops++;
                }
                if(abs(a[i]-a[i+1]) != level)
                {
                    done = 1;
                }
                reduce[i/2] = max(a[i],a[i+1]);
            }
            for(int i = 0;i < sizebt/2;i++)
            {
                a[i] = reduce[i];
            }

            sizebt /= 2;
            level *= 2;

        }

        if(done)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<ops<<endl;
        }
    }
    return 0;
}
