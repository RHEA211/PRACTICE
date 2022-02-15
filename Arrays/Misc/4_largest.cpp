#include<bits/stdc++.h>
using namespace std;

int largest(int a[],int n)
{
    int i,large,j;
    for(i=0;i<n-1;i++)
    {
        for( j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            large=a[j];
        }
    }
    if (a[0]>large)
    {
        large=a[0];
    }
       
    return large;
}



int main()
{
int n,i;
cin>>n;

int a[n];
for(int i=0;i<n;i++) {
    cin>>a[i];
}
 cout<<"the largest is- "<< largest(a,n);

}