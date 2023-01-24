#include <bits/stdc++.h>
#include<string.h>
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
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }

        int sum = 0;
        int maxx = 0;
        int done = 0;
        int ind = -1;
        for(int i = 0;i < n;i++)
        {
            sum+= a[i];
            if(maxx < a[i]&&done == 0)
            {
                maxx = max(a[i],maxx);
                ind = i+1;
            }
            if(sum > s&&done == 1)
            {
                break;
            }
            if(sum > s&&done == 0)
            {
                done = 1;
                sum-= maxx;
                //cout<<i<<" looool "<<maxx<<endl;
            }

        }
        if(done == 1)
        {
        cout<<ind<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}
