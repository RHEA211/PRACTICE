#include <bits/stdc++.h>
using namespace std;
//Naive solution 
//return true if pair with given sum exists 

/*
 */

bool pairsum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]== sum)
                return true;
        }
    }
    return false;

}


void values(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]== sum)
                cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
    

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

   cout<< pairsum(arr,n,sum)<<endl;
  values(arr,n,sum);
}