#include <bits/stdc++.h>
using namespace std;
//Naive solution 
//subarray with given sum

/*


 */

bool subarray_sum(int arr[],int n,int sum)
{
   for(int i=0;i<n;i++)
  {
      int curr_sum=0;
      for(int j=i+1;j<n;j++)
      {curr_sum +=arr[j];

      if(curr_sum==sum)
      {
          return true;
      }
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
   cout<< subarray_sum(arr,n,sum);
}