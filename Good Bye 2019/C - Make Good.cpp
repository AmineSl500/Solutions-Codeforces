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
        long long a[n];
        cin>>a[0];
        long long sum = a[0];
        long long xo = a[0];
        for(int i = 1;i < n;i++)
        {
            cin>>a[i];
            xo = xo ^ a[i];
            sum += a[i];
        }

        cout<<2<<endl;
        cout<<xo<<" "<<sum + xo<<endl;

    }
    return 0;
}
