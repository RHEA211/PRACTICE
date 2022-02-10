//Stock buy and sell - EFFICIENT SOLUTION -> O(n)

#include<bits/stdc++.h>
using namespace std;

/* buy the stock when it reaches bottom 
sell when it reaches peak */


int maxprofit(int price[],int n)
{
   int profit=0;
   for(int i=1;i<n;i++){
       if(price[i]>price[i-1]){
           profit= profit+(price[i]-price[i-1]); 
       }
   }
return profit;
}



int main()
{
    int n;
    cout<<"no. of stocks: ";
    cin>>n;
    int arr[n];
   /*  int start=0;
    int end=n-1; */
    cout<<"stocks: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Max profit is -"<<maxprofit(arr, n);
}
