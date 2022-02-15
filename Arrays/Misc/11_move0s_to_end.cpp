#include<bits/stdc++.h>
using namespace std;
//ERROR

int main()
{
int n,i;
cin>>n;

int a[n];
for(int i=0;i<n;i++) {
    cin>>a[i];
}
for(int i=0;i<n-1;i++) 


{
   if(a[i]==0){
       swap(a[i],a[i+1]);
   }
}
for(int i=0;i<n;i++) {
    cout<<a[i];
}
 
}