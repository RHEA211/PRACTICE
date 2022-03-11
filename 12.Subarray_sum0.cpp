#include <bits/stdc++.h>
using namespace std;
//Naive sol
//without set 

/*
 */

bool subarray_sum0(int arr[],int n,int sum)
{
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(arr[i]+arr[j]==0)
          return true;
      }
  }
  return false;

}

 int main()
{
    int n,i;
    cout<<"elements  : ";
    cin>>n;
   int arr[n];
   int sum;
   cout<<" Array-";
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
    }
    cout<<"enter the sum: ";
    cin>>sum;

   cout<< subarray_sum0(arr,n,sum);
}