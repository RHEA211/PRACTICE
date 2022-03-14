#include <bits/stdc++.h>
using namespace std;
//Pallin using i and j




void isPal(string &str)
{
    int begin=0;
    int end= str.length()-1;
    while(begin<end)
    {
        if(str[begin]!=str[end])
           { cout<<"Not A Palindrome";}

        else
        {
            begin++;
            end--;
           
        }
         

    

    }
    cout<<"It is a palindrome";


   
}

 int main()
{
   string str;
   cout<<"enter String: ";
   cin>>str;

  isPal(str);
   return 0;
}