//Trapping Rainwater Problem -> EFFICIENT Solution O(n), O(n) aux space

#include<bits/stdc++.h>
using namespace std;

/* IDEA:
Precompute lmax and rmax  */


//                         lmax <----------  ith bar  ----------> rmax
//                        0 to i                               i+1 to n


int rainwater(int arr[],int n)
{
   int res=0;// returns the water stored

// exclude the first and the last slab
// take lmax and rmax as arrays and precompute the lmax, rmax values
// so, for every arr[i], we already have that element's lmax and rmax as lmax[i] and rmax[i].

   int lmax[n],rmax[n];

   lmax[0]=arr[0];
   for(int i=1;i<n;i++)
   {
       lmax[i]=max(arr[i],lmax[i-1]);
   }

    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    rmax[i]=max(arr[i],rmax[i+1]);

    for(int i=1; i<n-1; i++)
    {
        // comparing ith term of lmax and rmax simultaneously
        res = res + (min(lmax[i], rmax[i]) - arr[i]);
    }

    return res;


            
}



int main()
{
    int n;
    cout<<"no. of columns : ";
    cin>>n;
    int arr[n];
 


    cout<<"slabs in columns : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"stored rainwater is  -> "<<rainwater(arr, n);
}
