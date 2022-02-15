#include<bits/stdc++.h>
using namespace std;

int largest(int a[],int n)
{
    int i,res=0;
    for(i=1;i<n;i++)
    {
        
            if(a[i]>a[res])
            res=i;
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
int x=largest(a,n);
 cout<<"the largest is- "<< a[x];

}