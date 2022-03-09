#include <bits/stdc++.h>
using namespace std;
//Efficient Solution  
//using unordered map
//returns no. of elements on intersection

/* 
 */

int inter(int a[],int b[], int m,int n)
{
    int res=0;
   unordered_set<int> h(a,a+m);
   for(int i=0;i<n;i++)
    if(h.find(b[i])!= h.end())
    {res++;
    h.erase(b[i]);}

    return res;

}

 int main()
{
    int n,i,m;
    cout<<"elements in A  : ";
    cin>>m;
   int a[m];
   cout<<" Array A-";
   for(int i=0;i<m;i++)
   {
        cin>>a[i];
    }
    cout<<"elements in B  : ";
    cin>>n;
   int b[n];
   cout<<" Array B-";
   for(int i=0;i<n;i++)
   {
        cin>>b[i];
    }

  cout<<" no of elem in intersec are " << inter(a,b,m,n);
}