#include <bits/stdc++.h>
using namespace std;
//Efficient  solution 
//subarray with given sum

/*


 */

bool subarray_sum(int arr[],int n,int sum)
{
   unordered_set<int>h;
   int pre_sum=0;

   for(int i=0;i<n;i++){
       pre_sum +=arr[i];

       if(pre_sum == sum)
        return true;

        if(h.find(pre_sum -sum)!= h.end())
            return true;

        h.insert(pre_sum);
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