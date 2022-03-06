 #include <bits/stdc++.h>
using namespace std;
//Naive solution 
//without using unordered set

int countdist(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++){
        bool flag= false;
        for(int j=0;j<i;j++){
            if(arr[i]== arr[j])
            {
                flag=true;break;
            }
        }

    if (flag==false)
    {
        res++;
    }





    }
   
    

    return res;
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