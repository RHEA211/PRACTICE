
//PRODUCT OF MAX MIN IN ARR

/* two arrays of A and B respectively of sizes N1 and N2, the task is to calculate 
the product of the maximum element of the first array and minimum element of the second array.  */

#include<bits/stdc++.h>
using namespace std;


int find_multiplication(int a[], int b[], int n, int m)
    {
       int max=INT_MIN;
        int min=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        
        
        for(int i=0;i<m;i++)
        {
            if(b[i]<min)
            {
                min=b[i];
            }
        }
        
        
        
        int prod= max*min;
        
        return prod;
    }

    int main()
{
    int n,i,m;
    cout<<"elements in vector : ";
    cin>>n>>m;
    int a[n],b[m];
   cout<<" Array 1-";
   for(int i=0;i<n;i++)
   {
        cin>>a[i];
    }
    
    cout<<" Array 2 -";
   for(int i=0;i<n;i++)
   {
        cin>>b[i];
    }
cout<<find_multiplication(a,b,n,m);

}