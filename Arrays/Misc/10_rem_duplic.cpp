#include<bits/stdc++.h>
using namespace std;

//sorted array- remove duplicates
//naive solution -O(n), aux space- O(n)

int duplicate(int a[],int n)
{
  int temp[n];
  temp[0]=a[0];
  int res=1;
  for(int i=0;i<n;i++)
  {
      if(temp[res-1]!=a[i])
      {
          temp[res]=a[i];
          res++;
      }
  for(int i=0;i<res;i++){
      a[i]=temp[i];
  }
  
  
  
  
  
  }
return res;
}



int main()
{
int n,i;
cin>>n;

int a[n];
for(int i=0;i<n;i++) {
    cin>>a[i];
}


 n = duplicate(a, n);

       cout<<"After Removal"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<a[i]<<" ";
       }

}