#include<bits/stdc++.h>
using namespace std;

// insert an element in the array 
int main()
{
int n,i;
cin>>n;

int a[n];
for(int i=0;i<n;i++) {
    cin>>a[i];
}

int ele,index;
cout<<"enter element to be inserted \n";
cin>>ele;

cout<<"enter the index at which its to be inserted: \n";
cin>>index;
n++;
for(i=index;i<n;i++){
    a[i+1]=a[i];
}
a[index]=ele;
for(int i=0;i<n;i++) {
    cout<<a[i]<<" ";
}
}