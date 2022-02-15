#include<bits/stdc++.h>
using namespace std;

//sorted array- remove duplicates
//O(n), aux space- O(1)
//compare every element with last element

int duplicate(int a[],int n)
{
 	int res = 1;

	for(int i = 1; i < n; i++)
	{
		if(a[res - 1] != a[i])
		{
			a[res] = a[i];
			res++;
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