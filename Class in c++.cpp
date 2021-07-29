#include<bits/stdc++.h>
using namespace std;

#define fi() ios_base::sync_with_stdio;cin.tie(NULL);cout.tie(NULL);
#define ll long long int
//#define test() int t; cin>>t; while(t--)

// class defination
class solution{
  public:
  void function()
  {
      cout<<"This is class"<<endl;
      cout<<"object will be called in main function";
  }
};

int main()
{
    // object declaration
    solution object;
    object.function();
    
    return 0;
}
