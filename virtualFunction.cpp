#include<iostream>
using namespace std;
class A 
{
public:
virtual void function(int a,int b)=0;
};

class B:public A 
{
public:
void function(int a,int b)
{
    cout<<"add="<<a+b<<endl;
}
};

class C:public A 
{
public:
void function(int a,int b)
{
    cout<<"mul="<<a*b<<endl;
}
};
class D:public A 
{
public:
void function(int a,int b)
{
    cout<<"mul+5="<<a*b+5<<endl;
}
};
int main()
{
  int a,b;
  cout<<"enter value of a & b:";
  cin>>a>>b;
B obj;
obj.function(a,b);

C obj2;
obj2.function(a,b);
D obj3;
obj3.function(a,b);
    return 0;
}