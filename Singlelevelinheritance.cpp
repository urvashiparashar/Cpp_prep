#include<bits/stdc++.h>
using namespace std;
class Human
{
    public:
    void speak()
    {
        cout<<"Hii";
    }
};
class Animal
{
   public:
   int age,wt;
   void bark()
   {
       cout<<"hello";
   }
};
class A:public Animal,public Human
{

};
int main()
{
    A a;
    a.speak();
    a.bark();
    return 0;
}