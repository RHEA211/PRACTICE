#include <bits/stdc++.h>
using namespace std;

//ANAGRAM

// use characters as index

const int CHAR= 256;

bool anagram(string &str1, string &str2)
{

if(str1.length()!= str2.length())
    return false;

int count[CHAR]={0};
for(int i=0;i<str1.length();i++)
{
    count[str1[i]]++;
    count[str2[i]]--;
}

for(int i=0;i<CHAR;i++)
{
    if(count[i]!=0)
        return false;
}

return true;
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


