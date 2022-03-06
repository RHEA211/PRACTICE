#include <bits/stdc++.h>
using namespace std;
// using unordered map



int freq(int arr[],int n)
{
    unordered_map<int,int>h;
    for(int i=0;i<n;i++){
        h[arr[i]]++;


        
        
    }
for(auto e:h)
    cout<<e.first<<" "<<e.second<<endl;

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

    cout<< freq(arr,n);
}