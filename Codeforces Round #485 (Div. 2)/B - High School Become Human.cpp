#include<bits/stdc++.h>
using namespace std;

int main(){
   // freopen("input.txt","r",stdin);
  int x,y;
  cin>>x>>y;
  if(x == y)
  {
     cout<<"=";
     return 0;
  }
  if(y*log(x) == x * log(y)){
    cout<<"=";
  }
  if(y*log(x)>x * log(y))
  {
      cout<<">";
  }
  if(y*log(x)<x * log(y)){
  cout<<"<";
  }

	return 0;
}
