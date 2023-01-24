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

        string stripe[8];
        for(int i = 0;i < 8;i++)
        {
            cin>>stripe[i];
        }
        char rep;
        for(int i = 0;i < 8;i++)
        {
            int countr = 0;
            int countb = 0;
            for(int j = 0;j < 8;j++)
            {
                if(stripe[i][j] == 'R')
                {
                    countr++;
                }

            }
            if(countr == 8)
            {
                rep = 'R';
            }
            for(int j = 0;j < 8;j++)
            {
                if(stripe[j][i] == 'B')
                {
                    countb++;
                }
            }
            if(countb == 8)
            {
                rep = 'B';
            }
        }
        cout<<rep<<endl;
    }
    return 0;
}
