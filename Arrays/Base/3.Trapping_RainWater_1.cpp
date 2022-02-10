//Trapping Rainwater Problem -> NAIVE Solution O(n^2)

#include<bits/stdc++.h>
using namespace std;

/* IDEA:
We need to find raiwater stored bby middle bars
for any ith bar, the amt of water stored will be:
                    min(lmax,rmax)-height of the ith bar  */


//                         lmax <----------  ith bar  ----------> rmax
//                        0 to i                               i+1 to n


int rainwater(int arr[],int n)
{
   int res=0;// returns the water stored

    //exclude the first and the last slab
   for(int i=1;i<n-1;i++)  //for the ith bar
   {

       // 
       int lmax=arr[i];
       
       for (int j=0;j<i;j++)
       {lmax= max(lmax,arr[j]);}
   

   int rmax=arr[i];
   for(int j=i+1;j<n;j++)
   {
       rmax= max(rmax,arr[j]);
   }

 //summation for per slab to get final water stored
   res= res+(min(lmax,rmax)-arr[i]);

/*  res != (min(lmax,rmax)-arr[i]) since we need summations
    
    whn there is no greater element on left and right of arr[i], 
  then lmax and rmax same as element bar 
    ex- arr[i]=5(and this is the longest slab)hence,
    lmax, rmax =5; res= res(say 0) +[5-5]=0
  
  
  */

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
