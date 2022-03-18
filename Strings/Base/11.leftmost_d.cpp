#include <bits/stdc++.h>
using namespace std;
//first occurence of repeating left most one
//efficient
// make visited array

const int CHAR= 256;


int leftmost(string &str)
{

bool visited[CHAR];//binary array

fill(visited,visited+CHAR, false);
int res=-1;

for(int i=str.length()-1;i>=0;i--)
{
    if(visited[str[i]])

        res=i;

    else
        visited[str[i]]=true;
}

return res;

}





 int main()
{
   string str;
   cout<<"enter String: ";
   cin>>str;

 cout<< leftmost(str);
   return 0;
}