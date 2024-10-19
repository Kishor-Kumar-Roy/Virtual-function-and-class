#include <iostream>
using namespace std;
class A
{

public :
  virtual  void action (int a,int b )=0;
};
class B: public A
{
public:
    void action (int a,int b)
    {
        int result=a+b;
        cout<<" The result for addition of a and b is: "<<result<<endl;
    }
};
class C: public A
{
public:
    void action (int a,int b)
    {
        int result;
        result=a*b;
        cout<<" The result for multiplication of a and b is: "<<result<<endl;
    }
};

int main()
{
    int a,b;
    cout<<" Enter value of a and b: ";
    cin>>a>>b;
    B obj;
    obj.action(a,b);
    C obj2;
    obj2.action(a,b);
    return 0;
}