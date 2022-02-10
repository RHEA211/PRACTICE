//Stock buy and sell - NAIVE  recursive solution ->O(n^2)

#include<bits/stdc++.h>
using namespace std;


int maxprofit(int price[],int start,int end)
{
    if(end<=start)
        return 0;	// when arr[] has 1 element

    int profit=0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)	
        {
            if(price[j]>price[i])
            {
                //recursively call max profit for left of i  and right of j
                int curr_profit= price[j]-price[i]+maxprofit(price,start,i-1)+ maxprofit(price,j+1,end);
                profit=max(profit,curr_profit);
            }
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
    cout<<"Max profit is -"<<maxprofit(arr, 0, n - 1);
}
