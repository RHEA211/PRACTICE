#include <bits/stdc++.h>
using namespace std;
//first occurence of repeating left most one

//efficient
const int CHAR= 256;


int leftmost(string &str)
{
    int count[CHAR]={0};
   for(int i=0;i<str.length();i++)
     count[str[i]]++;

    for(int i=0;i<str.length();i++)
    {
        if(count[str[i]]>1)
            return i;
    }
   
   return -1;
}

 int main()
{
   string str;
   cout<<"enter String: ";
   cin>>str;

 cout<< leftmost(str);
   return 0;
}