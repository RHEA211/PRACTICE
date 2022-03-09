#include <bits/stdc++.h>
using namespace std;
//Naive solution 
//without using unordered map
//returns no. of elements on intersection

/* 
 */

int inter(int a[],int b[], int m,int n)
{
    int res=0;
    for(int i=0;i<m;i++)
    {
        bool flag= false;
    for(int j=0;j<i;j++)
    {
        if(a[i]==a[j])
       { flag= true;break;}
    }
    if (flag ==true)
    continue;
    


    for(int j=0;j<n;j++)
    {
        if(a[i]==b[j]){
            res++;
            cout<<b[i]<<endl;
            break;
        }
    }
   
    }

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