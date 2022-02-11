
//WAVE ARRAY

/* arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5]..... */

#include<bits/stdc++.h>
using namespace std;


void convertToWave(vector<int> arr, int n){
        
     for (int i=0;i<n-1;i+=2)

   {  swap(arr[i],arr[i+1]);}
    cout<<"wave- : ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
   
    }


    int main()
{
    int n,i;
    cout<<"elements in vector : ";
    cin>>n;
   vector<int>arr(n);
   cout<<" Array-";
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
    }


    

    convertToWave(arr,n);
    
    
    
return 0;
}