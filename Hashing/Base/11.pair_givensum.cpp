#include <bits/stdc++.h>
using namespace std;
//Efficient solution
//return true if pair with given sum exists 
//use UNORDERED SET

/*
 */

bool pairsum(int arr[],int n,int sum)
{
    unordered_set<int> h;
    for(int i=0;i<n;i++){
        if(h.find(sum-arr[i])!= h.end())
            return true;

        else
            h.insert(arr[i]);
        
    }
    return false;

}

void display(int arr[],int n,int sum)
{
    unordered_set<int> h;
    bool flag=0;
    for(int i=0;i<n;i++){
        if(h.find(sum-arr[i])!= h.end())

           {
               flag=1;
               cout<<"exists"<<endl;
               cout<<arr[i]<<" "<<(sum-arr[i])<<endl;
               }

        else
            h.insert(arr[i]);
        
    }
    if(flag==0)
    cout<<"doesnt exist";
    

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
 display(arr,n,sum);
}