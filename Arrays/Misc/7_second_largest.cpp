#include<bits/stdc++.h>
using namespace std;
// second largest -naive
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

int secondlargest(int a[],int n,int y)
{
    int x=largest(a,n);
    int sl= INT_MIN;

    for(int i=0;i<n;i++){
        if (a[i]== a[x])continue;

        else if (a[i]>sl)
        sl= a[i];
    }

    return sl;
}

int main()
{
int n,i;
cin>>n;

int a[n];
for(int i=0;i<n;i++) {
    cin>>a[i];
}

int y=largest(a,n);
 cout<<"the largest is- "<< a[y];

 cout<<"the second largest is- "<< secondlargest(a,n,y);

}