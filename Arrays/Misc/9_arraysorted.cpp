#include<bits/stdc++.h>
using namespace std;

//array sorted- increasing order

bool sorted(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        return false;
    }
    return true;

}

int main()
{
int n,i;
cin>>n;

int a[n];
for(int i=0;i<n;i++) {
    cin>>a[i];
}
 cout<<sorted(a,n);

}