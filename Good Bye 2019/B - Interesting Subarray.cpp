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
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        int done= 0;
        int ind = -1;
        for(int i = 1;i < n;i++)
        {
            if(abs(a[i] - a[i-1]) > 1)
            {
                done = 1;
                ind = i;
            }
        }
        if(done == 1)
        {
            cout<<"YES"<<endl;
            cout<<ind<<" "<<ind+1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
