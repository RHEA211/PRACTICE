//Segregate 0s and 1s 

#include <bits/stdc++.h>
using namespace std;




     void segregate0and1(int arr[], int n) {
       int count=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==1)
           {
               count++;
               arr[i]=0;
           }
       }
       
       for(int j=0;j<count;j++)
       {
           arr[n-1-j]=1;
       }
    }



    int main()
{
    int n,i;
    cout<<"elements  : ";
    cin>>n;
   int arr[n];
   cout<<" Array-";
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
    }


    

   segregate0and1(arr,n);
    for(int i=0;i<n;i++)
   {
        cout<<arr[i];
    }
    
    
return 0;
}