#include<iostream>
using namespace std;

class A {
    public:
    void sum(int a,int b)
    {
cout<<"sum="<<a+b<<endl;
    }
};

class B: public virtual A {
    public:
    void subs(int a,int b)
    {
         cout<<"subs="<<a-b<<endl;
    }
};
class C: public virtual A {
    public:
    void mul(int a,int b)
    {
         cout<<"mul="<<a*b<<endl;
    }
};
class D: public B, public C  {
    public:
    void div(int a,int b)
    {
         cout<<"div="<<a/b<<endl;
    }
};
int main() 
{
    int a,b;
    cout<<"enter value of a & b: ";
    cin>>a>>b;
D obj;
obj.sum(a,b);
obj.subs(a,b);
obj.mul(a,b);
obj.div(a,b);
    return 0;
}