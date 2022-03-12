#include <bits/stdc++.h>
using namespace std;
//Naive solution 
//longest subarray with given sum

/*


 */

int longest_sub(int arr[],int n,int sum)
{
    int res=0;
   for(int i=0;i<n;i++)
  {
      int curr_sum=0;
      for(int j=i+1;j<n;j++)
      {curr_sum +=arr[j];

      if(curr_sum==sum)
         res= max(res, (j-i+1)) ;
      
      }
  }
  return res;
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
   cout<< longest_sub(arr,n,sum);
}