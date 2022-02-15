#include<bits/stdc++.h>
using namespace std;
//efficient soln
//keep track of all non zero elements


int main()
{
int n,i;
cin>>n;

int a[n];
for(int i=0;i<n;i++) {
    cin>>a[i];
}
int count=0;
for(int i=0;i<n;i++) 
{
   if(a[i]!=0){
       swap(a[i],a[count]);
       count++;
   }
}
for(int i=0;i<n;i++) {
    cout<<a[i];
}
 
}