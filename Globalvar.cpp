#include<bits/stdc++.h>
using namespace std;
int score=15;
void b(int& i) //ref variable
{
   cout<<i<<endl;
   cout<<score<<endl;

}
void a(int& i) //ref variable
{
   char ch='a'; //local variable
   cout<<i<<endl;
   cout<<score<<endl;
//    b(i);

}

int main()
{
   int i;
   cin>>i;
   cout<<i<<endl;
   cout<<score<<endl;
//    {
//        int i=9;
//        cout<<i<<endl; //local var
//    }
   a(i);
   b(i);
   return 0;
}