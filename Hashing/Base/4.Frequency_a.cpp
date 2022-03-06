#include <bits/stdc++.h>
using namespace std;
//Naive solution 
//without using unordered map

/* 1. Check if seen before 
2. if seen , ignore it 
3.if not seen before, count frequency 
 */

void freq(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag= false;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            flag= true; break;
        }


        if (flag == true ) continue;

    int freq=1;
    for(int j=i+1; j<n;j++)
    {
        if(arr[i]== arr[j])
        freq++;
    }
 cout<< arr[i]<<" "<<freq<<endl;
    }

    

}

 int main()
{
    int n,i;
    cout<<"elements  : ";
    cin>>n;
   int arr[n];
   cout<<" Array-";
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
    }

    freq(arr,n);
}