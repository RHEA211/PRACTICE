#include<bits/stdc++.h>
using namespace std;

//use of pairs to return min max

pair<int,int> minmax(int a[],int n)
{
    int min= INT_MAX;
    int max= INT_MIN;

    for(int i=0;i<n;i++){
        if (a[i]<min)
        {
            min=a[i];
        }
    }

    for(int i=0;i<n;i++)

        {
            if(a[i]>max)
            {max= a[i];}
        }
    
    return make_pair(min,max);
}

int main(){

int n,i;
cin>>n;

int a[n];
for(int i=0;i<n;i++) {
    cin>>a[i];
}

pair<int,int> pp= minmax(a,n);
cout<<"min is- "<< pp.first<<"\n "<<"max is - "<<pp.second<<endl;




}