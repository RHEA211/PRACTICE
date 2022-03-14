#include <bits/stdc++.h>
using namespace std;
//Pallin using reverse function




void isPal(string &str)
{
    string rev=str;
    reverse(rev.begin(),rev.end());
    if (rev==str)   
        cout<<" It is a Palindrome";
    else    
        cout<<"Not a Palindrome";
}

 int main()
{
   string str;
   cout<<"enter String: ";
   cin>>str;

  isPal(str);
   return 0;
}