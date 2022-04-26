#include<bits/stdc++.h>
using namespace std;
class Human
{
    private:
    int ht,wt;
    public:
    int age;

    public:
    int getage()
    {
        return this->age;
    }
    void setage(int a)
    {
        this->age=a;
    }
};
class Male:private Human
{
   public:
   string color;

   int getage()
   {
       return this->age;
   }
   int getht()
   {
       return this->ht;
   }
   void sleep()
   {
       cout<<"Sleeping"<<endl;

   }
};
int main()
{
    Male m;
    // m.setage(10);
    // cout<<m.age;
    // cout<<m.wt<<" "<<m.ht<<endl;
    // m.sleep();
    cout<<m.getage()<<endl;//public
    cout<<m.getht()<<endl;
    return 0;
}