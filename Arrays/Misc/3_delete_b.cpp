#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,i;
cin>>n;

int a[n];
for(int i=0;i<n;i++) {
    cin>>a[i];
}
int x;
cin>>x;


    for(i=0;i<n;i++){
        if( a[i]==x)
        break;
    }
    if (i==n)
        return n;
    

    for(int j=i;j<n-1;j++){
        a[j]=a[j+1];}
n=n-1;

for(int i=0; i < n; i++)
       {
       		cout<<a[i]<<" ";
       }
    

}