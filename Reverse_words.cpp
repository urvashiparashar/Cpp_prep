#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;


int main()
{
   string s = "my name is akash";

    int start = 0;

    int p = 0;

    for (int i = 0; i <= s.length(); i++)

    {

        if (s[p] == ' ' || s[p] == '\0')

        {

            int end = p - 1;

            while (start <= end)

            {

                swap(s[start],s[end]);

                start++;

                end--;

            }

            start=p+1;

        }

        p++;

    }

    cout<<s;

   return 0;
}
