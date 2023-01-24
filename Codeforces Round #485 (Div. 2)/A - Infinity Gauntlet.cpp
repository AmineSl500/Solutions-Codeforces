#include<bits/stdc++.h>
using namespace std;

int main(){
  //  freopen("input.txt","r",stdin);
   int n;
   cin>>n;
   map<string,string>s;
   s["red"] = "Reality";
   s["green"] ="Time";
   s["blue"] = "Space";
   s["purple"] = "Power";
   s["yellow"] = "Mind";
   s["orange"] = "Soul";
   map<string,int>done;
   for(int i = 0;i <n;i++)
   {
       string ss;
       cin>>ss;
       done[ss] = 1;
   }
   cout<<6 - n<<endl;
//   cout<<done["red"]<<endl;
   for (std::map<string,string>::iterator it=s.begin(); it!=s.end(); ++it)
   {
    if(!done[it->first])
    {
    cout<< it->second << '\n';
    }
   }
	return 0;
}
