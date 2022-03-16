#include <bits/stdc++.h>
using namespace std;

//ANAGRAM




bool anagram(string &str1, string &str2)
{

if(str1.length()!= str2.length())
    return false;

sort(str1.begin(),str1.end());
sort(str2.begin(),str2.end());

return(str1==str2);


}



 int main()
{
   string str1,str2;
   cout<<"enter String s1: ";
    cin>>str1;

   cout<<"enter String s2: ";
    cin>>str2;
int n= str1.length();
int m= str2.length();
  
  cout<< anagram(str1,str2);
   return 0;
}


