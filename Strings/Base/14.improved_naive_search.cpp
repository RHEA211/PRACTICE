#include <bits/stdc++.h>
using namespace std;

//Naive search


void patsearching(string &txt, string &pat)
{ 
   
int m=pat.length();
int n=txt.length();


for(int i=0;i<= n-m; i++)

{
    int j;
    for(j=0;j<m;j++)
    if(pat[j]!=txt[i+j])
        break;

    if(j==m)
        cout<<i<<" ";

    if(j==0) //1st char mismatch
        i++;

    else //mismatch after matches since j not 0
        i=i+j;
  }

}




  int main()
{
   string txt,pat;
   cout<<"enter text: ";
   cin>>txt;

    cout<<"enter pat: ";
   cin>>pat;

 patsearching(txt,pat);
   return 0;
}
