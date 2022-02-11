//ROTATE ARRAY by D places

/* Given an unsorted array arr[] of size N, rotate it by D elements (Anti - clockwise).  */

#include<bits/stdc++.h>
using namespace std;

int main() {
//code
int  n,j, d;
cout<<"enter n and d places- ";
    cin >> n >> d;
    int arr[n];
    for (int j = n - d; j < n; j++ )
        cin >> arr[j];
    for (int j = 0; j < n - d; j++ )
        cin >> arr[j];

cout<<"reversed array- \n";
    for (int j = 0; j < n; j++ )
        cout << arr[j] << " ";
    cout << endl;

return 0;
}