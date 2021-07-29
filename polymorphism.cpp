                                                                     //method overloading(static polymorphism)
#include<bits/stdc++.h>
using namespace std;

#define fi() ios_base::sync_with_stdio;cin.tie(NULL);cout.tie(NULL);
#define ll long long int
//#define test() int t; cin>>t; while(t--)

// class defination
class solution{
  public:
  void functionADD(int x,int y)
  {
      cout<<x+y<<endl;
  }
  void functionADD(int x,int y, int z)
  {
      cout<<x+y+z<<endl;
  }
};

int main()
{
    solution object;
    object.functionADD(2,4);
    object.functionADD(2,4,8);
    
    return 0;
}
                                                                  // function overloading(dynamic)

#include<bits/stdc++.h>
using namespace std;

class base_class
{
    public:
    virtual void show()
    {
        cout<<"base class"<<endl;
    }
};
class derived_class:public base_class{
    public:
    void show()
    {
        cout<<"derived_class"<<endl;
    }
};

int main()
{
    derived_class ob2;
    ob2.show();
    
    return 0;
}
