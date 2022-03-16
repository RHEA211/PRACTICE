#include <bits/stdc++.h>
using namespace std;
//String subsequence




bool subsequence(string &str1, string &str2,int n,int m)
{

int j=0;
for(int i=0;i<n  && j<m ; i++)
{
    if(str1[i]==str2[j])
        j++;
}
    return (j==m);
    


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
  
  cout<< subsequence(str1,str2,n,m);
   return 0;
}


