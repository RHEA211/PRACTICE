#include <bits/stdc++.h>
using namespace std;
//Efficient solution
//use unordered map

//IDEA: prefix sum + hashing 

/*
when pre_sum1+ pre_sum2= pre_sum1
this means, pre_sum2 is actually 0

 */

bool subarray_sum0(int arr[],int n)
{
    unordered_set<int>h;
      int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum += arr[i];

    if(h.find(pre_sum)!= h.end())
    {
        return true;
    }
    if(pre_sum==0)
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

   cout<< subarray_sum0(arr,n);
}