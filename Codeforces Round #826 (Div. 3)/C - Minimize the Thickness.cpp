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
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        int result = n;
        for(int thicc = 1;thicc < n;thicc++)
        {
            long long sumfinal = 0;
            map<int,int>m;
            int maxxthicc = thicc;
            int no = 0;
            for(int i = 0;i < thicc;i++)
            {
                sumfinal += a[i];
            }
            int i = thicc;
            int j = thicc;
            int sum = 0;
            while(i < n)
            {

                if(sum > sumfinal)
                {
                    no = 1;

                    break;
                }
                if(sum == sumfinal)
                {
                    maxxthicc = max(i - j,maxxthicc);
                    j = i;
                    sum = 0;
                }

                sum += a[i];
                i++;
            }
            if(sum != sumfinal)
            {
                no = 1;
            }
            if(sum == sumfinal)
            {
                maxxthicc = max(i - j,maxxthicc);
                j = i;
            }
            if(no)
            {
                continue;
            }
            else{
                result = min(result,maxxthicc);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
