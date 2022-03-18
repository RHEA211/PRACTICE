#include <bits/stdc++.h>
using namespace std;
//first occurence of repeating left most one
//efficient
// make fIndex , fill with -1 

const int CHAR= 256;


int leftmost(string &str)
{

int fIndex[CHAR];

fill(fIndex,fIndex+CHAR, -1);// fill with -1

int res= INT_MAX;
for(int i=0;i<str.length(); i++)
{
    int fi= fIndex[str[i]];
    if(fi ==-1)
        fIndex[str[i]]=i;
    else

    res=min(res,fi);
}

 return(res== INT_MAX) ?-1: res; //if all distinct, return -1 else return res
}

 int main()
{
   string str;
   cout<<"enter String: ";
   cin>>str;

 cout<< leftmost(str);
   return 0;
}