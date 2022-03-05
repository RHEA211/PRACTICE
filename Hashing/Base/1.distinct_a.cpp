 #include <bits/stdc++.h>
using namespace std;

int countdist(int arr[],int n) {

    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);

    }

    return s.size();
}



 int main()
{
    int n,i;
    cout<<"elements  : ";
    cin>>n;
   int arr[n];
   cout<<" Array-";
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
    }

    cout<<" no. of dictinct elements are - "<<countdist(arr,n);

















}
