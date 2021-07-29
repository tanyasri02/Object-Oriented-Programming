#include<bits/stdc++.h>
using namespace std;

class A{
  int a=3,b=4;
  public:
  friend int fun(A k)
  {
    return (k.a+k.b);
  }
};

int main()
{
  A ob;
  cout<<fun(ob)<<endl;
  return 0;
}
