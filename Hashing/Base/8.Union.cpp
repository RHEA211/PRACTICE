#include <bits/stdc++.h>
using namespace std;
//Efficient Solution  
//using unordered map
//returns no. of elements on union

/* 
 */

int union_arr(int a[],int b[], int m,int n)
{
    
   unordered_set<int> h(a,a+m);
   for(int i=0;i<n;i++)
   { h.insert(b[i]);}
    for(int x: h){
        cout<<x<<" ";
    }
    return h.size()    ;

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

  cout<<" union is " << union_arr(a,b,m,n);
}